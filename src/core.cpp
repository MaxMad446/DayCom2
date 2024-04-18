// Auto-generated module | 2026-05-11T22:34:57.302697
#include <iostream>
#include <vector>

int compute_752() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
