// Auto-generated module | 2026-05-11T22:28:43.041214
#include <iostream>
#include <vector>

int compute_779() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
