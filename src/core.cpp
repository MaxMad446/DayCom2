// Auto-generated module | 2026-05-11T22:15:59.068056
#include <iostream>
#include <vector>

int compute_780() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_780() << std::endl;
    return 0;
}
