#include <iostream>
#include <vector>

using namespace std;

int multiply(int a, int b) {
    if (b == 0)
        return 0;
    if (b < 0)
        return -multiply(a, -b);
    return a + multiply(a, b - 1);
}

int sum_of_digit(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sum_of_digit(n / 10);
}

void dec_to_bin(int x) {
    if (x == 0)
        return;
    dec_to_bin(x / 2);
    cout << (x % 2);
}

void sum_2dim(const vector<vector<int>> &arr, int r, int c) {
    for (int i = 0; i < r; ++i) {
        int sum = 0;
        for (int j = 0; j < c; ++j) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

void sum_2array(const vector<vector<int>> &arr1, const vector<vector<int>> &arr2, int r, int c) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    //p1
    int a, b;
    cin >> a >> b;
    cout << multiply(a, b) << endl;

    //p2
    int n;
    cin >> n;
    cout << sum_of_digit(n) << endl;

    //p3
    int x;
    cin >> x;
    if (x == 0) {
        cout << "0" << endl;
    } else {
        dec_to_bin(x);
        cout << endl;
    }

    //p4
    int r1, c1;
    cin >> r1 >> c1;
    vector<vector<int>> arr1(r1, vector<int>(c1));
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> arr1[i][j];
        }
    }
    sum_2dim(arr1, r1, c1);

    //p5
    int r2, c2;
    cin >> r2 >> c2;
    vector<vector<int>> arr2(r2, vector<int>(c2));
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cin >> arr2[i][j];
        }
    }
    sum_2array(arr1, arr2, r1, c1);

    return 0;
}
