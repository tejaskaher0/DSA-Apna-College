# DSA Series by Shradha Khapra | Apna College

Learning and practicing every lecture taught by Shradha Khapra from Apna College.

[Complete C++ DSA Course | Data Structures & Algorithms | Shradha Ma'am | Apna College](https://youtube.com/playlist?list=PLfqMhTWNBTe137I_EPQd34TsgV6IO55pt&si=N2AK3kFvQlV_YafW)

## Lecture 01: Flowchart & Pseudocode

### Project Overview

This project contains basic C++ programs that demonstrate fundamental programming concepts like flowcharts and pseudocode. The goal is to solve simple problems using these techniques, providing a solid foundation in C++ programming and problem-solving.

### Features

The project includes the following C++ programs:

- **`sum_from_1_to_n.cpp`**: Calculates the sum of numbers from 1 to N.
- **`area_square.cpp`**: Computes the area of a square.
- **`prime_or_not.cpp`**: Checks if a number is prime.
- **`odd_even.cpp`**: Checks if a number is odd or even.
- **`min_of_2_nums.cpp`**: Finds the minimum of two numbers.

### Prerequisites

To run the programs, you need:

- A C++ compiler like g++ (part of the GCC toolchain)
- Basic knowledge of compiling and running C++ programs from the command line

### Installation

1. **Download the repository**:

   Clone the repository or download the files directly from the repository.

   ```bash
   git clone <repository-url>
   cd <repository-directory>

2. **Compile the Programs:**

Use a C++ compiler to compile each program. For example, to compile `sum_from_1_to_n.cpp`, run:

```bash
g++ sum_from_1_to_n.cpp -o sum_from_1_to_n
```

Follow the same process to compile and run other programs.

### Example Code

Here is the example code for the `sum_from_1_to_n.cpp` program, which calculates the sum of numbers from 1 to N:

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

### How to Run

1. Compile the program using the provided instructions.
2. Run the executable to see the output.

### Example Output:

```text
Enter the number: 5
Sum of 1 to 5 is: 15
```

### Contributing

Feel free to submit issues, fork the repository, and send pull requests to contribute to this project.

### License

This project is open-source and available under the MIT License.
