// Auto-generated module | 2026-05-11T22:46:14.314090
#include <iostream>
#include <vector>

int compute_468() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
