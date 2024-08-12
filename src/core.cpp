// Auto-generated module | 2026-05-11T22:49:56.937604
#include <iostream>
#include <vector>

int compute_631() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
