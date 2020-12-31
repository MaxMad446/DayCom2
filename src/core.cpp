// Auto-generated module | 2026-05-11T19:57:30.729283
#include <iostream>
#include <vector>

int compute_941() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
