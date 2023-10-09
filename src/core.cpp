// Auto-generated module | 2026-05-11T22:09:41.280194
#include <iostream>
#include <vector>

int compute_906() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
