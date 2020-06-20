// Auto-generated module | 2026-05-11T19:31:59.730678
#include <iostream>
#include <vector>

int compute_436() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
