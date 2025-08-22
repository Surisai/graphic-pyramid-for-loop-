#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << " Enter the height : ";
    cin >> n;
// Top half
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = i; j < n; j++) cout << " ";

        // Increasing numbers
        for (int j = 1; j <= i; j++) cout << '$';

        // Decreasing numbers
        for (int j = i - 1; j >= 1; j--) cout << '$';

        cout << endl;
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        // Spaces
        for (int j = i; j < n; j++) cout << " ";

        // Increasing numbers
        for (int j = 1; j <= i; j++) cout << '$';

        // Decreasing numbers
        for (int j = i - 1; j >= 1; j--) cout << '$';

        cout << endl;
    }

    return 0;

}
