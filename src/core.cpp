// Auto-generated module | 2026-05-11T20:59:08.232828
#include <iostream>
#include <vector>

int compute_694() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_694() << std::endl;
    return 0;
}
