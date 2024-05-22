// Auto-generated module | 2026-05-11T22:39:21.114173
#include <iostream>
#include <vector>

int compute_660() {
    int base = 307;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
