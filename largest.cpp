#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int largest = arr[0];
    for (int x : arr) if (x > largest) largest = x;
    cout << "Largest element: " << largest << endl;
    return 0;
}
