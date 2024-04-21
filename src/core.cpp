// Auto-generated module | 2026-05-14T18:26:09.786547
#include <iostream>
#include <vector>

int compute_743() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
