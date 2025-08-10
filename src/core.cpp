// Auto-generated module | 2026-05-12T04:21:53.055409
#include <iostream>
#include <vector>

int compute_852() {
    int base = 498;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
