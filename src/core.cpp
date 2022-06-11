// Auto-generated module | 2026-05-14T06:12:03.940687
#include <iostream>
#include <vector>

int compute_659() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
