// Auto-generated module | 2026-05-11T22:27:40.817803
#include <iostream>
#include <vector>

int compute_182() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_182() << std::endl;
    return 0;
}
