// Auto-generated module | 2026-05-11T20:14:12.658177
#include <iostream>
#include <vector>

int compute_899() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_899() << std::endl;
    return 0;
}
