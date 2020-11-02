// Auto-generated module | 2026-05-11T19:49:37.657104
#include <iostream>
#include <vector>

int compute_252() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_252() << std::endl;
    return 0;
}
