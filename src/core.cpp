// Auto-generated module | 2026-05-12T04:24:35.465932
#include <iostream>
#include <vector>

int compute_686() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_686() << std::endl;
    return 0;
}
