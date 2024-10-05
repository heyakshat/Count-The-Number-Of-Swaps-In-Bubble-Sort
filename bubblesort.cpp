#include<iostream>
using namespace std;
int minswap(int array[], int n, int swap = 0) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] < array[j + 1]) // Comparing array i & j
            {
                // Swap elements
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swap++;
            }
        }
    }
    return swap;
}
int main() {
    int n;
    cout << "";
    cin >> n;

    int array[n];
    cout << "";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int minSwap = minswap(array, n);
    cout << "" <<minSwap << endl;

    return 0;
}
