next <h1 align="center">🔢 Consecutive Ones Finder</h1>
<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white"/>
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Course-Programming%20Fundamentals-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/IDE-Visual%20Studio-purple?style=for-the-badge&logo=visualstudio&logoColor=white"/>
</p>

---

## 📌 Overview

A C++ program that reads binary data (0s and 1s) from a file,
stores them in a dynamic array, and finds the maximum number
of consecutive 1s along with their starting index and length.

---

## ⚙️ Features

| Feature | Description |
|---------|-------------|
| 📂 File Input | Reads binary data from user-specified file |
| 🔢 Consecutive 1s | Finds maximum consecutive 1s in the data |
| 📍 Starting Index | Displays starting index of max sequence |
| 📏 Length | Displays length of maximum sequence |
| 🧠 Dynamic Memory | Uses dynamic arrays with pointers |

---

## 🧠 Concepts Used

![Pointers](https://img.shields.io/badge/Pointers-blueviolet?style=for-the-badge)
![Dynamic Memory](https://img.shields.io/badge/Dynamic%20Memory-orange?style=for-the-badge)
![File Handling](https://img.shields.io/badge/File%20Handling-red?style=for-the-badge)
![Char Arrays](https://img.shields.io/badge/Char%20Arrays-success?style=for-the-badge)
![Functions](https://img.shields.io/badge/Functions-blue?style=for-the-badge)
![Loops](https://img.shields.io/badge/Loops-yellow?style=for-the-badge)

---

## 🔧 Functions Used

| Function | Type | Description |
|----------|------|-------------|
| `getsize()` | int | Counts total characters in file |
| `readData()` | void | Reads file data into dynamic array |
| `findConsecutiveOnes()` | void | Finds max consecutive 1s, index & length |

---

## 📂 Input File Format

Create a `.txt` file with binary data like:

```
0110111101110001
```

---

## 📤 Sample Output

```
Enter name of file: data.txt
Maximum consecutive ones are: 1111
Starting index is: 4
Length is: 4
```

---

## ▶️ How to Run

### 🖥️ Visual Studio
1. Open **Visual Studio**
2. Create new **Empty Project** → C++
3. Add `main.cpp` to project
4. Create your binary data file (e.g. `data.txt`)
5. Place `data.txt` in **Debug folder**
6. Press **Ctrl + F5** to Run
7. Enter filename when prompted

### 💻 VS Code
1. Open folder in **VS Code**
2. Create `data.txt` in same folder
3. Open terminal → **Ctrl + `**
4. Type:
```bash
g++ main.cpp -o output
./output
```

### 🖱️ Dev C++
1. Open `main.cpp` in **Dev C++**
2. Place `data.txt` in same folder
3. Press **F11** to Compile & Run

---

## 📁 Project Files

```
consecutive-ones-cpp/
├── main.cpp        → main source code
├── data.txt        → input binary file
└── README.md       → project documentation
```

---

## ⚠️ Important Notes

- Input file must contain only 0s and 1s
- No spaces between digits in input file
- `data.txt` must be in same folder as `.exe`
- Dynamic memory is properly freed using `delete[]`

---

## 👩‍💻 Author

**Aqsa Ismail** | [GitHub](https://github.com/aqsaismail04) | [LinkedIn](https://www.linkedin.com/in/aqsaismail04/)  
