// Auto-generated module | 2026-05-11T22:09:17.504114
#include <iostream>
#include <vector>

int compute_638() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
