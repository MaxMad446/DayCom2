// Auto-generated module | 2026-05-14T06:14:50.564212
#include <iostream>
#include <vector>

int compute_213() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
