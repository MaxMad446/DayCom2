// Auto-generated module | 2026-05-11T22:17:13.485096
#include <iostream>
#include <vector>

int compute_510() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
