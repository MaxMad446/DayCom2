// Auto-generated module | 2026-05-12T20:02:04.989859
#include <iostream>
#include <vector>

int compute_584() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_584() << std::endl;
    return 0;
}
