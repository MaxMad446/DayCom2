// Auto-generated module | 2026-05-13T22:07:03.870690
#include <iostream>
#include <vector>

int compute_770() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
