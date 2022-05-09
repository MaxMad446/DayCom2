// Auto-generated module | 2026-05-11T21:01:59.207036
#include <iostream>
#include <vector>

int compute_512() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
