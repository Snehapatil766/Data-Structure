#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
}

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        swap(a[i], a[min]);
    }
}

void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = a[l + i];
    for (int j = 0; j < n2; j++) R[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);
        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int n, choice;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Selection Sort\n";
        cout << "3. Merge Sort\n";
        cout << "4. Quick Sort\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            bubbleSort(a, n);
            display(a, n);
            break;

        case 2:
            selectionSort(a, n);
            display(a, n);
            break;

        case 3:
            mergeSort(a, 0, n - 1);
            display(a, n);
            break;

        case 4:
            quickSort(a, 0, n - 1);
            display(a, n);
            break;

        case 5:
            cout << "Exiting program";
            break;

        default:
            cout << "Invalid choice";
        }
    } while (choice != 5);

    return 0;
}
