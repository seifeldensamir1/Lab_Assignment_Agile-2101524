# Lab Assignment - Agile - Seif Elden Samir(2101524)

## Overview
This project contains a C++ program with a basic summation function, designed for a lab assignment. The program prompts the user to enter two integers and then displays the sum of those integers.

## Files
- **2101524_SeifEldenSamir_main.cpp**: Main C++ file containing the `summation` function and program logic.
- **README.md**: This file, providing a summary of the project.

## Features
- **Summation Function**: Adds two integers provided by the user.
- **User Input**: Takes input directly from the user via the console.
- **Clear Output**: Displays the calculated sum back to the user.

## Getting Started

### Prerequisites
- Make sure you have a C++ compiler installed (such as `g++`).
- Ensure Git is installed to clone the repository.

### Installation and Setup
1. **Clone the Repository**  
   Clone the repository to your local machine:
   ```bash
   git clone https://github.com/seifeldensamir1/Lab_Assignment_Agile-2101524.git

2. **Navigate into the Project Directory**
   ```bash
   cd  Lab_Assignment_Agile-2101524

3. **Compile the C++ Code**
  ```bash
g++ 2101524_SeifEldenSamir_main.cpp -o summation
````
4. **Run the Program**
   Execute the compiled program with:
   ```bash
    ./summation

 ## Usage
When you run the program, it will ask you to enter two integers. After entering them, it will display the sum. Here’s an example interaction:

**Example Code**
```bash
#include <iostream>
using namespace std;

int summation(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << "Sum: " << summation(x, y) << endl;
    return 0;
}
````
## Git Commands
Here are some Git commands you might find useful while working on this project:
**Clone the repository:**
```bash
git clone https://github.com/seifeldensamir1/Lab_Assignment_Agile-2101524.git
````
**Stage changes:**
```bash
git add 2101524_SeifEldenSamir_main.cpp
````
**Commit changes:**
```bash
git commit -m "Add Summation Function"
````
**Push Changes to Github:**
```bash
git push origin main
````

### Author 
Seif Elden Samir (2101524) 





