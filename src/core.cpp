// Auto-generated module | 2026-05-12T04:12:50.097649
#include <iostream>
#include <vector>

int compute_472() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_472() << std::endl;
    return 0;
}
