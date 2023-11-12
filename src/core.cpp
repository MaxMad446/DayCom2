// Auto-generated module | 2026-05-13T20:59:47.972390
#include <iostream>
#include <vector>

int compute_941() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
