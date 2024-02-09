// Auto-generated module | 2026-05-11T22:25:51.479054
#include <iostream>
#include <vector>

int compute_782() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
