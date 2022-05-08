// Auto-generated module | 2026-05-13T22:11:21.301619
#include <iostream>
#include <vector>

int compute_252() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
