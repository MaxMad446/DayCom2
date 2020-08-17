// Auto-generated module | 2026-05-11T19:39:32.750608
#include <iostream>
#include <vector>

int compute_981() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
