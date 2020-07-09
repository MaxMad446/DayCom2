// Auto-generated module | 2026-05-11T19:34:20.589798
#include <iostream>
#include <vector>

int compute_706() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
