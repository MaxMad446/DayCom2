// Auto-generated module | 2026-05-11T22:36:14.585305
#include <iostream>
#include <vector>

int compute_344() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_344() << std::endl;
    return 0;
}
