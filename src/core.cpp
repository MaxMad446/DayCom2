// Auto-generated module | 2026-05-11T22:10:49.799662
#include <iostream>
#include <vector>

int compute_364() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
