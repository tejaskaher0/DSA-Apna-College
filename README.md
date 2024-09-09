# DSA-Series-by-Shradha-didi
Learning &amp; Practicing every Lecture taught by Shradha Khapra | Apna College

[Complete C++ DSA Course | Data Structures & Algorithms | Shradha didi | Apna College](https://youtube.com/playlist?list=PLfqMhTWNBTe137I_EPQd34TsgV6IO55pt&si=4cM2I_Uz-xRSFKgY)

## Lecture 01: Flowchart & Pseudocode

### Project Overview

This project contains basic C++ programs demonstrating fundamental programming concepts like flowcharts and pseudocode. It focuses on solving simple problems using these techniques.

### Features

The project includes the following programs:

- **`sumof_1toN.cpp`**: Calculates the sum of numbers from 1 to N.
- **`area_of_square.cpp`**: Calculates the area of a square.
- **`prime_or_not.cpp`**: Determines if a number is prime or not.
- **`odd_or_even.cpp`**: Determines if a number is odd or even.
- **`min_of_2numbers.cpp`**: Finds the minimum of two numbers.

### Installation

This project doesn't require any specific environment managers or package managers. It can be compiled and run using a C++ compiler (like g++).

### Usage

1. **Compilation:** Use a C++ compiler to compile each individual program. For example, to compile `sumof_1toN.cpp`, use the following command:

```bash
g++ sumof_1toN.cpp -o sumof_1toN
```

2. **Execution:** Run the compiled executable:

```bash
./sumof_1toN
```

This will run the `sumof_1toN` program. Repeat the process for other programs.

**Example:**

```cpp
// sumof_1toN.cpp

#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Sum of 1 to " << n << " is: " << sum << endl;
    return 0;
}
```

This example code calculates the sum of numbers from 1 to N. Follow the installation and usage instructions to compile and run this program.
