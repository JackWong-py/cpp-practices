
# 🧠 Week 3 Practice — *Arrays, Structures, Pointers & Recursion*

📘 Covers: Chapters **11–17**
🎯 Goal: Strengthen your grasp on **memory, data manipulation, and recursion.**

---

## 🔹 **A. Arrays (Ch. 11)** — *Basics & Patterns*

**Concepts:** fixed-size arrays, iteration, basic algorithms.

1. **Sum of Array Elements**

   * Input 5 integers, compute and print their sum and average.

2. **Find Maximum and Minimum**

   * Store 10 numbers in an array → find and display largest & smallest.

3. **Reverse an Array**

   * Print an array’s contents in reverse order.

4. **Count Even & Odd Elements**

   * Count how many even and odd numbers are in an array.

5. **Search for an Element**

   * Input an integer and tell whether it exists in the array.

---

## 🔹 **B. Structures (Ch. 12)** — *Custom Data Grouping*

**Concepts:** `struct`, arrays of structs, and nested data.

6. **Store Student Data**

   * Define a `struct Student { string name; int age; double grade; };`
   * Store and display data for 3 students.

7. **Find Top Scorer**

   * Using an array of students, find who has the highest grade.

8. **Nested Structures**

   * Create a `struct Address` inside `struct Person` (name, city, postal code).
   * Input and print data neatly.

---

## 🔹 **C. Pointers (Ch. 13–14)** — *Memory, Addresses, and Dereferencing*

**Concepts:** pointer declaration, dereferencing, pointer arithmetic.

9. **Pointer Basics Demo**

   * Declare an `int` variable and a pointer to it; print its address and value.

10. **Swap Two Numbers (using pointers)**

    * Write a function `void swap(int *a, int *b);` and test it.

11. **Sum Using Pointer Traversal**

    * Use a pointer to loop through an array and calculate its sum.

12. **Find Largest Using Pointer**

    * Find max value in an array using pointer arithmetic only (no `[]`).

---

## 🔹 **D. Dynamic Memory (Ch. 15)** — *`new`, `delete`, and heap allocation*

**Concepts:** `new`, `delete`, dynamically sized arrays.

13. **Dynamic Array Creation**

    * Ask user how many elements → allocate dynamically → input & print.

14. **Average of Dynamic Array**

    * Create an array of `n` doubles, compute average, then release memory.

15. **Copy Dynamic Array**

    * Create a dynamic array → copy its contents to a new array manually.

---

## 🔹 **E. Intro to Data Structures (Ch. 16)** — *Linked Lists*

**Concepts:** nodes, pointers to structs, traversal.

16. **Create Simple Linked List (3 nodes)**

    * Define `struct Node { int data; Node* next; };`
    * Manually link 3 nodes and print values.

17. **Insert at Head**

    * Write a function `void insertHead(Node*& head, int value);` that adds a new node at the beginning.

18. **Count Nodes in Linked List**

    * Function that traverses and counts number of nodes.

---

## 🔹 **F. Recursion & Binary Trees (Ch. 17)** — *Recursive thinking and tree structures*

**Concepts:** recursion base cases, binary recursion, tree traversal.

19. **Recursive Factorial Function**

    * Classic recursion: `factorial(n)` returns `n * factorial(n - 1)`.

20. **Binary Tree Traversal (Intro)**

    * Define a simple binary tree node:

      ```cpp
      struct Node { int data; Node* left; Node* right; };
      ```

      * Manually create a small tree (3–5 nodes)
      * Implement and test:

        * `void printPreOrder(Node* root);`
        * `void printInOrder(Node* root);`
        * `void printPostOrder(Node* root);`

---

## ⚙️ Bonus Challenges (Optional if you finish early)

* Implement **bubble sort** and **selection sort** manually (arrays).
* Create a **recursive Fibonacci** function.
* Write a function to **reverse a linked list recursively**.

---

## 🧩 Summary by Topic

| Topic             | Chapter Range | Exercises |
| ----------------- | ------------- | --------- |
| Arrays            | 11            | 1–5       |
| Structures        | 12            | 6–8       |
| Pointers          | 13–14         | 9–12      |
| Dynamic Memory    | 15            | 13–15     |
| Linked Lists      | 16            | 16–18     |
| Recursion & Trees | 17            | 19–20     |