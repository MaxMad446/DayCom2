// Auto-generated module | 2026-05-11T22:36:32.893279
#include <iostream>
#include <vector>

int compute_946() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
