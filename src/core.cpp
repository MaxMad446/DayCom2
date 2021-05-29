// Auto-generated module | 2026-05-12T20:47:14.494784
#include <iostream>
#include <vector>

int compute_675() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
