# BFS and DFS Algorithms in C

Simple, beginner-friendly C implementations for **Breadth-First Search (BFS)** and **Depth-First Search (DFS)** graph traversals.

---

## Overview

- **BFS (Breadth-First Search):** Explores the graph level-by-level using an explicit **Queue** (FIFO).
- **DFS (Depth-First Search):** Explores the graph path-by-path going as deep as possible using **Recursion** (Call Stack).

---

## Memory Comparison

| Feature | BFS | DFS |
| :--- | :--- | :--- |
| **Tracking Structure** | Queue Array | Function Call Stack |
| **Traversal Focus** | Graph Width | Graph Depth |
| **Space Complexity** | $O(V)$ | $O(V)$ |

---

## How to Compile & Run

```bash
# Compile
gcc main.c -o main

# Run
./main
