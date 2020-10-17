// Auto-generated module | 2026-05-11T19:47:34.373648
#include <iostream>
#include <vector>

int compute_580() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
