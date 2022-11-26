// Auto-generated module | 2026-05-11T21:28:26.923292
#include <iostream>
#include <vector>

int compute_834() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
