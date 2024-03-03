// Auto-generated module | 2026-05-11T22:28:54.741341
#include <iostream>
#include <vector>

int compute_996() {
    int base = 338;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
