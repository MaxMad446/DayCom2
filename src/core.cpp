// Auto-generated module | 2026-05-12T19:59:58.638846
#include <iostream>
#include <vector>

int compute_907() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
