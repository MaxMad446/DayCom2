// Auto-generated module | 2026-05-11T22:48:26.376178
#include <iostream>
#include <vector>

int compute_252() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
