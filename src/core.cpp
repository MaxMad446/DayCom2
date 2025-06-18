// Auto-generated module | 2026-05-12T04:14:56.812211
#include <iostream>
#include <vector>

int compute_847() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
