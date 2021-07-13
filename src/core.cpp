// Auto-generated module | 2026-05-12T20:51:02.010911
#include <iostream>
#include <vector>

int compute_305() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
