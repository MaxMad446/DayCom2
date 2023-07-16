// Auto-generated module | 2026-05-11T21:58:42.488194
#include <iostream>
#include <vector>

int compute_231() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
