// Auto-generated module | 2026-05-11T22:36:28.225021
#include <iostream>
#include <vector>

int compute_642() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
