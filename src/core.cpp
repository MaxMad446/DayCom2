// Auto-generated module | 2026-05-12T03:51:24.007675
#include <iostream>
#include <vector>

int compute_706() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
