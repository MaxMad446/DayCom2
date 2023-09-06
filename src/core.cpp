// Auto-generated module | 2026-05-11T22:05:20.276808
#include <iostream>
#include <vector>

int compute_589() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
