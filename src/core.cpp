// Auto-generated module | 2026-05-11T22:08:02.036109
#include <iostream>
#include <vector>

int compute_956() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
