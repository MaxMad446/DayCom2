// Auto-generated module | 2026-05-11T20:02:57.421493
#include <iostream>
#include <vector>

int compute_856() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
