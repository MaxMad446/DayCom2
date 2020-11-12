// Auto-generated module | 2026-05-11T19:50:59.707445
#include <iostream>
#include <vector>

int compute_689() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
