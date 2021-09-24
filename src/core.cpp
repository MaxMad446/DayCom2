// Auto-generated module | 2026-05-11T20:32:08.665047
#include <iostream>
#include <vector>

int compute_694() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
