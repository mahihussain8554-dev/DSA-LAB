# String Implementation

A collection of fundamental **String Operations implemented from scratch using C/C++**. This project focuses on understanding how strings work internally and implementing common string manipulation techniques without relying heavily on built-in string functions.

## 📌 Overview

A **string** is a sequence of characters terminated by a null character (`\0`) in C.

This implementation demonstrates fundamental operations used for processing and manipulating strings.

## ⚙️ Operations Implemented

* **String Input & Output** — Reading and displaying strings.
* **String Length** — Calculates the number of characters in a string.
* **String Copy** — Copies one string into another.
* **String Concatenation** — Combines two strings.
* **String Comparison** — Compares two strings lexicographically.
* **String Reverse** — Reverses the characters of a string.
* **String Search** — Searches for a character or substring.
* **Character Frequency** — Counts occurrences of characters.
* **Palindrome Check** — Determines whether a string reads the same forward and backward.

## 🧠 Example

For the string:

```text
hello
```

The reverse operation produces:

```text
olleh
```

For:

```text
madam
```

The palindrome check returns:

```text
Palindrome
```

## ⏱️ Complexity

| Operation        | Time Complexity |
| ---------------- | --------------- |
| Length           | O(n)            |
| Copy             | O(n)            |
| Concatenation    | O(n + m)        |
| Comparison       | O(min(n, m))    |
| Reverse          | O(n)            |
| Search           | O(n × m)        |
| Palindrome Check | O(n)            |

Where `n` and `m` represent the lengths of the strings involved.

## 🛠️ Concepts Covered

* Character Arrays
* Null-Terminated Strings
* String Traversal
* String Manipulation
* Character Processing
* Searching and Comparison
* Memory Handling
* Time Complexity Analysis

## 🎯 Learning Objectives

This implementation is designed to strengthen understanding of:

* How strings are stored in memory
* Character array manipulation
* String processing algorithms
* Manual implementation of common string operations
* Efficient problem-solving with strings

## 📂 Implementation

All operations are implemented manually to develop a strong understanding of the underlying logic rather than depending entirely on built-in string functions.

## 📄 License

This project is created for **educational and learning purposes**.
