// Auto-generated module | 2026-05-11T20:51:44.637820
#include <iostream>
#include <vector>

int compute_598() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
