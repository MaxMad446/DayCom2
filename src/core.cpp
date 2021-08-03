// Auto-generated module | 2026-05-12T20:52:38.938717
#include <iostream>
#include <vector>

int compute_382() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_382() << std::endl;
    return 0;
}
