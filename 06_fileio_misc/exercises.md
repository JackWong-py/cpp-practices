## 🧩 **20 Practice Exercises – Week 5**



---



### 🧬 **1–5: Inheritance & Polymorphism**



1. **Basic Inheritance**



   * Create a base class `Shape` with `area()` and `perimeter()` functions.

   * Derive `Rectangle` and `Circle` classes that override those functions.

   * Demonstrate polymorphism using a `Shape*` array.



2. **Virtual Function Practice**



   * Create a base class `Animal` with a `speak()` method (virtual).

   * Derive `Dog`, `Cat`, and `Cow`. Each prints a different sound.

   * Use an array of `Animal*` to store them and call `speak()` polymorphically.



3. **Constructor Inheritance**



   * Create a base class `Person(name, age)` and derived class `Student(name, age, gpa)`.

   * Demonstrate constructor chaining and printing all info.



4. **Abstract Class**



   * Create an abstract class `Employee` with pure virtual `calculatePay()`.

   * Derive `HourlyEmployee` and `SalariedEmployee` and compute their pay differently.



5. **Polymorphism in Action**



   * Build a `vector<Shape*>` that holds circles, rectangles, and triangles.

   * Loop through it and compute total area dynamically (via virtual `area()`).



---



### 🌐 **6–8: Namespaces**



6. **Namespace Separation**



   * Create a namespace `MathOps` containing functions `add`, `subtract`, `multiply`, and `divide`.

   * Demonstrate using both qualified (`MathOps::add`) and `using namespace`.



7. **Nested Namespace**



   * Create nested namespaces `Physics::Mechanics` and `Physics::Optics` each with one function.

   * Call them using `Physics::Mechanics::function()` syntax.



8. **Prevent Naming Conflicts**



   * Write two functions `print()` in different namespaces.

   * Call each one explicitly using its namespace to show how conflicts are resolved.



---



### 📂 **9–12: File Input/Output**



9. **Basic File Write**



   * Ask the user for 5 lines of text and save them into `notes.txt` using `ofstream`.



10. **Basic File Read**



    * Read and display the content of `notes.txt` line by line using `ifstream`.



11. **Append Mode**



    * Modify Exercise 9 so that it appends new lines to the existing file rather than overwriting it.



12. **File Statistics**



    * Read a text file and count how many lines, words, and characters it contains.



---



### 🧩 **13–15: Templates in C++**



13. **Function Template**



    * Write a template function `max_value()` that returns the greater of two values.

      Test it with `int`, `double`, and `string`.



14. **Class Template**



    * Write a template class `Box<T>` that stores a value of any type, with `set()`, `get()`, and `display()`.



15. **Template Specialization**



    * Specialize the `Box<string>` version so that `display()` prints the string in quotes.



---



### 💅 **16–17: Formatting Output (iomanip)**



16. **Number Formatting**



    * Display a list of floating-point numbers using `fixed`, `setprecision()`, and `setw()` to align columns nicely.



17. **Table Formatting**



    * Create a mini “product list” that displays product names, quantities, and prices in neat columns using `setw()` and `left`/`right`.



---



### 🚨 **18–20: Exception Handling & Error Reporting**



18. **Simple Exception**



    * Create a division program that throws an exception if the denominator is 0 and catches it gracefully.



19. **Custom Exception Class**



    * Define your own exception class `NegativeValueError`.

      Throw it when the user enters a negative number in a function.



20. **File Exception Handling**



    * Write a function that opens a file.

      If the file doesn’t exist or fails to open, throw a custom `FileOpenError` and catch it in `main()`.



---



## 🗓️ **Suggested Study Schedule (Week 5)**



| Day     | Topics                     | Exercises                                                                  |

| ------- | -------------------------- | -------------------------------------------------------------------------- |

| **Mon** | Inheritance & Polymorphism | 1–5                                                                        |

| **Tue** | Namespaces                 | 6–8                                                                        |

| **Wed** | File I/O                   | 9–12                                                                       |

| **Thu** | Templates                  | 13–15                                                                      |

| **Fri** | iomanip Formatting         | 16–17                                                                      |

| **Sat** | Exception Handling         | 18–20                                                                      |

| **Sun** | Review & Combine           | Build a mini project combining **File I/O + Classes + Exception Handling** |

