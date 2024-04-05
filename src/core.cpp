// Auto-generated module | 2026-05-11T22:33:11.751262
#include <iostream>
#include <vector>

int compute_909() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_909() << std::endl;
    return 0;
}
