// Auto-generated module | 2026-05-11T20:14:35.895880
#include <iostream>
#include <vector>

int compute_371() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
