<h1 align="center">🔢 Consecutive Ones Finder (C++ Project)</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Course-Programming%20Fundamentals-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/IDE-Visual%20Studio-purple?style=for-the-badge&logo=visualstudio&logoColor=white"/>
</p>

---

## 📌 Overview
A C++ program that reads binary data (0s and 1s) from a file, stores it using **dynamic memory allocation**, and finds the **maximum consecutive sequence of 1s**, including its starting index and length.

---

## ⚙️ Features
| Feature | Description |
|--------|-------------|
| 📂 File Input | Reads binary data from a text file |
| 🔢 Pattern Detection | Finds maximum consecutive 1s |
| 📍 Index Tracking | Identifies starting position of sequence |
| 📏 Length Calculation | Computes length of max sequence |
| 🧠 Dynamic Memory | Uses pointers and dynamic arrays |

---

## 🧠 Concepts Used
![Pointers](https://img.shields.io/badge/Pointers-blueviolet?style=for-the-badge)
![Dynamic Memory](https://img.shields.io/badge/Dynamic%20Memory-orange?style=for-the-badge)
![File Handling](https://img.shields.io/badge/File%20Handling-red?style=for-the-badge)
![Functions](https://img.shields.io/badge/Functions-blue?style=for-the-badge)
![Loops](https://img.shields.io/badge/Loops-yellow?style=for-the-badge)

---

## 🔧 Functions Used

| Function | Type | Description |
|----------|------|-------------|
| `getsize()` | int | Calculates total size of file data |
| `readData()` | void | Reads file content into dynamic array |
| `findConsecutiveOnes()` | void | Finds max sequence, index, and length |

---

## 📂 Input File Format
Create a `.txt` file containing only binary digits:


0110111101110001


> ⚠️ Ensure there are no spaces or invalid characters.

---

## 📤 Sample Output


Enter file name: data.txt
Maximum consecutive ones: 1111
Starting index: 4
Length: 4


---

## ▶️ How to Run

### 🖥️ Visual Studio
1. Create **C++ Empty Project**
2. Add `main.cpp`
3. Create `data.txt` in **Debug folder**
4. Run using **Ctrl + F5**
5. Enter file name when prompted

---

### 💻 VS Code
```bash
g++ main.cpp -o output
./output
🖱️ Dev C++
Open project
Place data.txt in same folder
Press F11
📁 Project Structure
consecutive-ones-finder/
├── main.cpp
├── data.txt
└── README.md
⚠️ Important Notes
Input must contain only 0 and 1
No spaces allowed in file
File must be in same directory as executable
Dynamic memory is properly deallocated using delete[]
👩‍💻 Author

Aqsa Ismail
GitHub: aqsaismail04
LinkedIn: Profile
