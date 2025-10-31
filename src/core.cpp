// Auto-generated module | 2026-05-12T04:33:04.790091
#include <iostream>
#include <vector>

int compute_962() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
