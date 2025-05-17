// Auto-generated module | 2026-05-12T04:10:55.013372
#include <iostream>
#include <vector>

int compute_595() {
    int base = 239;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
