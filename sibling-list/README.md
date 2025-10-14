# 👨‍👩‍👧 Sibling Linked List Project

This C++ project demonstrates how to use **linked lists** to manage and store family (sibling) information dynamically.

---

## 💻 Files

| File | Description |
|------|--------------|
| `list.h` | Struct and class declarations |
| `list.cpp` | Function definitions |
| `client.cpp` | Main program logic |
| `siblings.txt` | Output file |

---

## 🧩 Features

- Prompts the user for:
  - Their name, age, and gender
  - The number of siblings
  - Each sibling’s details
- Adds all siblings to a linked list
- Prints all informationt to the console, and to a file (`siblings.txt`)

---

## 🧠 Concepts Used

- **Structs** for representing sibling data
- **Linked lists** for dynamic data storage
- **Classes** and constructors
- **File output** with `ofstream`
- **Loops and pointers**

---

## ⚙️ How to Run

1. Compile the files together:
   ```bash
   g++ list.cpp client.cpp -o siblings.exe
   ./siblings.exe
2. Follow the prompts to enter your information.
  ```markdown
  Example:
  
  Enter your name: Alex
  Enter your age: 18
  How many siblings do you have? 2
  Enter sibling #1 name: Sara
  Enter sibling #1 age: 21
  Enter sibling #1 gender: F
  Enter sibling #2 name: Max
  Enter sibling #2 age: 15
  Enter sibling #2 gender: M
  ```
3. The program prints the list to the console and saves it to `siblings.txt`.
