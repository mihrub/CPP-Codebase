## C++ STL – Full Summary

This folder contains my learning and practice codes for the **C++ Standard Template Library (STL)**.

The goal of this folder is not only to write code, but also to understand:
- why each STL component is used
- when to use it
- and its time complexity

---

## 📌 What is STL?

The C++ Standard Template Library (STL) provides ready-made data structures and algorithms.
It helps write clean, fast and efficient code without implementing everything from scratch.

STL mainly contains:
- Containers
- Iterators
- Algorithms
- Function objects (functors)

---

## 📂 Topics Covered

### 1. Sequence Containers

#### ✔ Vector
Used when dynamic array behavior is needed.

Why used:
- fast access by index
- dynamic size

Time complexity:
- access by index → O(1)
- push_back → O(1)
- insert/erase in middle → O(n)

---

#### ✔ Deque
Used when insertion and deletion are needed at both ends.

Time complexity:
- push_front / push_back → O(1)

---

#### ✔ List
Used when frequent insertion and deletion in the middle is required.

Time complexity:
- insert / erase (with iterator) → O(1)
- access by index → O(n)

---

---

### 2. Associative Containers

#### ✔ Set
Stores unique elements in sorted order.

Why used:
- automatic sorting
- no duplicates

Time complexity:
- insert, erase, find → O(log n)

---

#### ✔ Multiset
Same as set, but allows duplicate elements.

Time complexity:
- insert, erase, find → O(log n)

---

#### ✔ Map
Stores key-value pairs in sorted order.

Why used:
- fast lookup by key
- ordered data

Time complexity:
- insert, erase, find → O(log n)

---

#### ✔ Multimap
Same as map but allows duplicate keys.

Time complexity:
- insert, erase, find → O(log n)

---

---

### 3. Unordered Containers (Hash based)

#### ✔ Unordered_Set
Stores unique elements without order.

Time complexity:
- average insert, erase, find → O(1)
- worst case → O(n)

---

#### ✔ Unordered_Map
Stores key-value pairs using hashing.

Time complexity:
- average insert, erase, find → O(1)
- worst case → O(n)

---

---

### 4. Container Adapters

#### ✔ Stack
Follows LIFO (Last In First Out)

Operations:
- push, pop, top

Time complexity:
- push, pop → O(1)

---

#### ✔ Queue
Follows FIFO (First In First Out)

Time complexity:
- push, pop → O(1)

---

#### ✔ Priority_Queue
Used when highest (or lowest) priority element is needed.

Time complexity:
- push → O(log n)
- pop → O(log n)
- top → O(1)

---

---

### 5. Iterators

Used to traverse containers just like pointers.

Why used:
- to work with STL algorithms
- to access container elements in a standard way

---

---

### 6. STL Algorithms

Some common algorithms used in this folder:

- sort → O(n log n)
- binary_search → O(log n)
- find → O(n)
- count → O(n)
- reverse → O(n)
- max_element / min_element → O(n)

Why algorithms are used:
- they are optimized
- reduce manual loops
- improve code readability

---

---

## 🎯 Purpose of This Folder

- To learn how standard containers work
- To choose the right container for the right problem
- To understand time complexity before using any STL structure
- To write efficient and clean competitive and general purpose code