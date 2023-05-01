package com.github.jmlb23.gitexample.redux

interface Store<S, A, E> {

	val dispatch: Dispatch<A>

	fun subscribe(subscriber: (S) -> Unit): Subscription

	fun unsubscribe(subscription: Subscription)

	fun state(): S

	val enviroment: E

}

data class Subscription(private val hash: String)

typealias Dispatch<A> = suspend (A) -> Unit

typealias Reducer<S, A> = (S, A) -> S

typealias Middleware<S, A, E> = (Dispatch<A>) -> (Store<S, A, E>) -> (Dispatch<A>) -> Dispatch<A>