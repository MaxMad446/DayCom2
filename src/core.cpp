// Auto-generated module | 2026-05-11T20:08:18.215529
#include <iostream>
#include <vector>

int compute_222() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_222() << std::endl;
    return 0;
}
