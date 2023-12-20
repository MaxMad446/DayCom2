// Auto-generated module | 2026-05-13T21:03:03.267372
#include <iostream>
#include <vector>

int compute_285() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
