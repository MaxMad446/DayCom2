// Auto-generated module | 2026-05-11T21:47:12.706572
#include <iostream>
#include <vector>

int compute_739() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
