# 🧩 **20 Practice Questions (Ch. 18–25)**



---



## 🧱 **Chapter 18 – STL (vector, map, iterator)**



1. **Vector Practice** – Write a program that reads integers from the user until `-1` is entered. Store them in a `vector<int>`, then print them in reverse order using an iterator.

2. **Map Practice** – Create a `map<string, int>` that stores student names and scores. Then, print all key–value pairs sorted alphabetically by name.

3. **Counting with Map** – Input a string of text, count the occurrences of each word using `map<string, int>`, and display frequency counts.

4. **Vector of Structs** – Define a struct `Product { string name; double price; }`. Store 5 products in a `vector`, then print the most expensive product.

5. **Iterator Modification** – Given a `vector<int>`, remove all even numbers using `erase()` and iterators safely (no index-based removal).



---



## 🧵 **Chapter 19 – More About string**



6. **String Splitter** – Ask the user to input a sentence, and split it into words manually (without using `stringstream`). Store words in a `vector<string>`.

7. **String Find and Replace** – Write a function `string replace_word(string text, string old_word, string new_word)` that replaces all occurrences.

8. **Palindrome Checker** – Check if a user-entered string is a palindrome (ignore case and spaces).

9. **Substrings and Concatenation** – Create a program that asks for first name and last name, stores them, and prints initials (e.g., “John Smith → J.S.”).

10. **String Iterator Practice** – Use an iterator to iterate through a `string` and count vowels.



---



## 🪲 **Chapter 20 – Debugging with Code::Blocks**



11. **Debug Scenario** – Write a small program with an intentional logical bug (e.g., off-by-one error). Step through it with the debugger and fix it.

12. **Breakpoint Practice** – Create a loop that sums 10 numbers. Set a breakpoint halfway and use the *Watch* window to inspect variable values.

13. **Null Pointer Debugging** – Write a function that returns a pointer. Debug a crash due to dereferencing a `nullptr` and fix it with a condition.



---



## 🧩 **Chapter 21 – Breaking Programs into Smaller Pieces**



14. **Modular Program** – Split a program into multiple `.cpp` and `.h` files:



&nbsp;   * `main.cpp`, `math_utils.cpp`, `math_utils.h`

&nbsp;   * Write simple functions like `add()`, `multiply()`, and test them.

15. **Reusability Practice** – Build a small “utility library” header that defines 3 helper functions: `max_of_two()`, `min_of_two()`, `average()`. Include it in `main.cpp`.



---



## 🧠 **Chapter 22 – Introduction to Program Design**



16. **Simple Design Exercise** – Plan and implement a *Book Library System*:



&nbsp;   * `Book` has title, author, year

&nbsp;   * Store in `vector<Book>`

&nbsp;   * Menu: Add, Search, Display all

17. **Flow and Modularity** – Design a simple banking system that separates logic into functions: `create_account()`, `deposit()`, `withdraw()`, `display_balance()`.



---



## 🔒 **Chapter 23 – Hiding Representation of Structured Data**



18. **Encapsulation Practice** – Redesign your `Book` struct as a `class` with private attributes and public gettersetter functions. Demonstrate encapsulation.

19. **Data Validation** – Add validation in your `setPrice()` method so it cannot accept negative numbers. Demonstrate it in `main()`.



---



## ⚙️ **Chapter 24–25 – The Class & Its Life Cycle**



20. **Full Class Lifecycle Project** –

&nbsp;   Build a `class Car` with:



&nbsp;   * Private data: `make`, `model`, `year`, `mileage`

&nbsp;   * Constructor, Copy Constructor, Destructor

&nbsp;   * Methods: `drive(int km)`, `display()`, and `get_age()`

&nbsp;   * Demonstrate creating, copying, and destroying objects in `main()`

