
---

# 🎓 Grade Calculation Program

This C++ program reads student grade data from a file and calculates:
- Average lab score
- Average quiz score
- Midterm exam total
- Final exam input from the user
- Overall weighted grade

---

## 🧩 Features

- Reads `grades.txt` with entries like:
  
  L 18
  
  Q 8
  
  L 19
  
  M 85
- Calculates totals and averages
- Asks user for a final exam grade
- Outputs results clearly in the console

---

## 🧠 Concepts Used

- **File handling** with `ifstream`
- **Loops** for data aggregation
- **Functions** for modular code (`gradeAvg`, `gradeTotal`)
- **Type conversion** and **percent-based calculations**

---

## ⚙️ How to Run

1. Make sure `grades.txt` is in the same folder as `grade.cpp`
2. Compile and run:

 ```bash
 g++ grade.cpp -o grade.exe
 ./grade.exe
