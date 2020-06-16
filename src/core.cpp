// Auto-generated module | 2026-05-11T19:31:23.051574
#include <iostream>
#include <vector>

int compute_730() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
