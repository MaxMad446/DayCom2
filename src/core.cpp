// Auto-generated module | 2026-05-14T06:26:23.261290
#include <iostream>
#include <vector>

int compute_260() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
