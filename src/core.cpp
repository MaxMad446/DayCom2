// Auto-generated module | 2026-05-11T21:12:15.780492
#include <iostream>
#include <vector>

int compute_706() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
