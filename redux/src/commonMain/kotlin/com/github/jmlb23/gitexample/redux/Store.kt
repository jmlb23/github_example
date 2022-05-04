package com.github.jmlb23.gitexample.redux

import kotlinx.atomicfu.atomic
import kotlin.random.Random

fun <S : Any, A : Any, E> createStore(
	initalState: S,
	reducer: Reducer<S, A>,
	middleware: List<Middleware<S, A, E>> = emptyList(),
	appEnviroment: E
): Store<S, A, E> =
	object : Store<S, A, E> {

		private val _state = atomic(initalState)
		private val subscriptions = mutableMapOf<Subscription, (S) -> Unit>()

		private val _dispatch: Dispatch<A> by lazy {
			middleware.reversed().fold({ x -> defaultDispatch(x) }) { acc, next ->
				next { _dispatch(it) }(this)(acc)
			}
		}

		private fun defaultDispatch(action: A) {
			val state = reducer(_state.value, action)
			_state.getAndSet(state)
			subscriptions.onEach {
				it.value(state)
			}
		}

		override val dispatch: Dispatch<A> = _dispatch


		override fun subscribe(subscriber: (S) -> Unit) =
			Random.nextBytes(32).toString().let(::Subscription).let {
				subscriptions[it] = subscriber
				it
			}


		override fun unsubscribe(subscription: Subscription) {
			subscriptions.remove(subscription)
		}

		override fun state(): S = _state.value

		override val enviroment: E = appEnviroment


	}
