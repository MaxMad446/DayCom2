// Auto-generated module | 2026-05-14T06:28:14.339357
#include <iostream>
#include <vector>

int compute_706() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
