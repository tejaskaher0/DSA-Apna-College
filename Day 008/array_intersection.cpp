// WAF to print intersection of 2 arrays.

#include <iostream>
using namespace std;

void commonElement(int arr1[], int arr2[], int size1, int size2) {

    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    cout << endl;
    return;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {4, 5, 3, 2, 8, 9};

    int size1 = 7;
    int size2 = 6;

    commonElement(arr1, arr2, size1, size2);
    return 0;
}


// #include <iostream>
// using namespace std;

// void commonElement(int arr1[], int arr2[], int size1, int size2) {
//     for(int i = 0; i < size1; i++) {
//         for(int j = 0; j < size2; j++) {
//             if(arr1[i] == arr2[j]) {
//                 cout << arr1[i] << " ";
//                 break; // Avoid printing duplicates
//             }
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5, 6, 7};
//     int arr2[] = {4, 5, 3, 2, 8, 9};

//     int size1 = sizeof(arr1)/sizeof(arr1[0]);
//     int size2 = sizeof(arr2)/sizeof(arr2[0]);

//     commonElement(arr1, arr2, size1, size2);
//     return 0;
// }