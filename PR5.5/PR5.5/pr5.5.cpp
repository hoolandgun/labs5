#include <iostream>
#include <iomanip>
#include <string>
#define LINK_TEST

using namespace std;

int current_level = 0;
int max_depth = 0;
bool show_logs = false;

int pascal_recursive(int i, int j) {
    current_level++;
    if (current_level > max_depth) {
        max_depth = current_level;
    }

    if (show_logs == true) {
        cout << "(" << i << "," << j << ") Level: " << current_level << endl;
    }

    if (j == 0 || j == i) {
        if (show_logs == true) {
            cout << "Base case (" << i << "," << j << ") returns 1 at Level: " << current_level << endl;
        }
        current_level--;
        return 1;
    }

    int res1 = pascal_recursive(i - 1, j - 1);
    int res2 = pascal_recursive(i - 1, j);
    int sum = res1 + res2;

    if (show_logs == true) {
        cout << "Node (" << i << "," << j << ") " << res1 << " + " << res2 << " = " << sum << " at Level: " << current_level << endl;
    }

    current_level--;
    return sum;
}
#ifdef LINK_TEST
int main() {
    int n;
    cout << "n = ";
    cin >> n;
    cout << endl;
    const int W = 4;

    cout << "Recursive method" << endl;
    for (int i = 0; i < n; i++) {
        cout << string((n - 1 - i) * (W / 2), ' ');
        for (int j = 0; j <= i; j++) {
            cout << setw(W) << pascal_recursive(i, j);
        }
        cout << endl;
    }
    cout << endl;
    cout << "--- Full Recursion Stats ---" << endl;
    show_logs = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {

            max_depth = 0;
            current_level = 0;

            cout << ">>>>>>>>>>>>>>>>>>> Node (" << i << "," << j << ") <<<<<<<<<<<<<<<<<<<<<<<<" << endl;
            pascal_recursive(i, j);
            cout << "Max Depth: " << max_depth << endl << endl;
        }
    }

    return 0;
}
#endif