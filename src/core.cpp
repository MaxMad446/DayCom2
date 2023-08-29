// Auto-generated module | 2026-05-11T22:04:17.032267
#include <iostream>
#include <vector>

int compute_807() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
