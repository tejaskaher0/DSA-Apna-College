# DSA-Series-by-Shradha-didi
Learning &amp; Practicing every Lecture taught by Shradha Khapra | Apna College

[Complete C++ DSA Course | Data Structures & Algorithms | Shradha Ma'am | Apna College](https://youtube.com/playlist?list=PLfqMhTWNBTe137I_EPQd34TsgV6IO55pt&si=N2AK3kFvQlV_YafW)

## Lecture 01: Flowchart & Pseudocode

### Project Overview

This project contains basic C++ programs demonstrating fundamental programming concepts like flowcharts and pseudocode. It focuses on solving simple problems using these techniques.

### Features

The project includes the following programs:

- **`sum_from_1_to_n.cpp`**: Calculates the sum of numbers from 1 to N.
- **`area_square.cpp`**: Calculates the area of a square.
- **`prime_or_not.cpp`**: Determines if a number is prime or not.
- **`odd_even.cpp`**: Determines if a number is odd or even.
- **`min_of_2_nums.cpp`**: Finds the minimum of two numbers.

### Installation

This project doesn't require any specific environment managers or package managers. It can be compiled and run using a C++ compiler (like g++).

### Usage

1. **Compilation:** Use a C++ compiler to compile each individual program. For example, to compile `sum_from_1_to_n.cpp`, use the following command:

```bash
g++ sum_from_1_to_n.cpp -o sum_from_1_to_n
```

2. **Execution:** Run the compiled executable:

```bash
./sum_from_1_to_n
```

This will run the `sum_from_1_to_n` program. Repeat the process for other programs.

**Example:**

```cpp
// sum_from_1_to_n.cpp

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, count = 1;

    cout << "Enter the number : ";
    cin >> num;

    while(count <= num) {
        sum += count;
        count++;
    }

    cout << "Sum of 1 to " << num << " is : " << sum << endl;

    return 0;
}
```

This example code calculates the sum of numbers from 1 to N. Follow the installation and usage instructions to compile and run this program.