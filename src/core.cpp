// Auto-generated module | 2026-05-12T03:51:37.501530
#include <iostream>
#include <vector>

int compute_458() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_458() << std::endl;
    return 0;
}
