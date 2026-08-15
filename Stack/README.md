# Stack Implementation

A simple and structured implementation of the **Stack Data Structure** using C/C++. This project demonstrates the fundamental operations of a stack and helps understand the **LIFO (Last In, First Out)** principle.

## 📌 Overview

A **Stack** is a linear data structure in which elements are inserted and removed from the same end, known as the **top**.

The stack follows the:

> **LIFO — Last In, First Out**

The element inserted most recently is the first one to be removed.

## ⚙️ Operations Implemented

* **Push** — Adds an element to the top of the stack.
* **Pop** — Removes the top element from the stack.
* **Peek/Top** — Returns the top element without removing it.
* **Display** — Displays all elements currently present in the stack.
* **isEmpty** — Checks whether the stack is empty.
* **isFull** — Checks whether the stack is full (array-based implementation).

## 🧠 Example

Consider the following sequence:

```text
Push(10)
Push(20)
Push(30)
```

The stack becomes:

```text
| 30 | ← Top
| 20 |
| 10 |
------
```

After performing `Pop()`:

```text
| 20 | ← Top
| 10 |
------
```

The element `30` is removed first because the stack follows **LIFO**.

## ⏱️ Complexity

| Operation | Time Complexity |
| --------- | --------------- |
| Push      | O(1)            |
| Pop       | O(1)            |
| Peek      | O(1)            |
| isEmpty   | O(1)            |
| isFull    | O(1)            |
| Display   | O(n)            |

## 🛠️ Concepts Covered

* Stack Data Structure
* LIFO Principle
* Array-based Stack
* Stack Operations
* Overflow and Underflow
* Dynamic Memory Management

## 🚨 Stack Conditions

### Stack Overflow

Occurs when trying to insert an element into a full stack.

```text
Stack Overflow
```

### Stack Underflow

Occurs when trying to remove an element from an empty stack.

```text
Stack Underflow
```

## 📂 Implementation

The implementation is written from scratch to demonstrate the core functionality of a stack without relying on built-in stack libraries.

## 🎯 Learning Objectives

This implementation is intended to strengthen understanding of:

* Linear data structures
* Memory management
* Function-based data structure implementation
* Time and space complexity
* Fundamental Data Structures and Algorithms

## 📄 License

This project is created for **educational and learning purposes**.
