#include <iostream>
#include <vector>
#include <utility> // cho pair
using namespace std;

int main() {
    int n;
    
    cin >> n;

    vector<int> A(n); // Mảng A
    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<pair<int, int>> frequency; // Vector lưu giá trị và tần suất

    for (int i = 0; i < n; i++) {
        bool found = false; // Biến để kiểm tra nếu phần tử đã xuất hiện
        // Duyệt qua vector frequency
        for (auto& p : frequency) {
            if (p.first == A[i]) {
                p.second++; // Tăng tần suất
                found = true;
                break;
            }
        }
        // Nếu chưa tìm thấy, thêm mới vào vector
        if (!found) {
            frequency.push_back(make_pair(A[i], 1));
        }
    }

    // Xuất kết quả
    cout << "Giá trị và tần suất xuất hiện:\n";
    for (const auto& p : frequency) {
        cout <<  p.first << p.second << endl;
    }

    return 0;
}
