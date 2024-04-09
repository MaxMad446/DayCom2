// Auto-generated module | 2026-05-11T22:33:52.745473
#include <iostream>
#include <vector>

int compute_998() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
