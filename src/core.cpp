// Auto-generated module | 2026-05-14T18:03:24.126539
#include <iostream>
#include <vector>

int compute_618() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
