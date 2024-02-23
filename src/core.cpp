// Auto-generated module | 2026-05-11T22:27:48.157567
#include <iostream>
#include <vector>

int compute_642() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
