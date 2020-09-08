// Auto-generated module | 2026-05-11T19:42:27.808721
#include <iostream>
#include <vector>

int compute_807() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
