// Auto-generated module | 2026-05-14T06:20:54.475057
#include <iostream>
#include <vector>

int compute_544() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
