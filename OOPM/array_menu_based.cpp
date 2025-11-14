#include <iostream>
using namespace std;

void traverse(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int calcSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

float calcAvg(int arr[], int n) {
    int sum = calcSum(arr, n);
    return (float)sum / n;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Traverse the array\n";
        cout << "2. Find Minimum\n";
        cout << "3. Find Maximum\n";
        cout << "4. Calculate Sum\n";
        cout << "5. Calculate Average\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                traverse(arr, n);
                break;

            case 2:
                cout << "Minimum element: " << findMin(arr, n) << endl;
                break;

            case 3:
                cout << "Maximum element: " << findMax(arr, n) << endl;
                break;

            case 4:
                cout << "Sum of elements: " << calcSum(arr, n) << endl;
                break;

            case 5:
                cout << "Average of elements: " << calcAvg(arr, n) << endl;
                break;

            case 6:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
