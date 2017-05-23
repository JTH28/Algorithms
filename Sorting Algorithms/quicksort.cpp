#include <iostream>

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;
    for(int j = p; j < r; j++) {
        if(A[j] < x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i + 1;
}

void qsort(int A[], int p, int r) {
    if(p < r) {
        int q = partition(A,p,r);
        qsort(A, p, q-1);
        qsort(A, q + 1, r);
    }
}

int main() {
    int testArr[5] = {9, 7, 123, 22, 12};
    for(int i = 0; i < 5; i++){
        std::cout << testArr[i] << " ";
    }
    std::cout << std::endl;

    qsort(testArr, 0, 4);

    for(int i = 0; i < 5; i++){
        std::cout << testArr[i] << " ";
    }
    std::cout << std::endl;
}
