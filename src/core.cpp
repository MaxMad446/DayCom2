// Auto-generated module | 2026-05-11T20:36:28.738966
#include <iostream>
#include <vector>

int compute_141() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
