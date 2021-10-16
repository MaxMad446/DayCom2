// Auto-generated module | 2026-05-12T20:59:10.962599
#include <iostream>
#include <vector>

int compute_724() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
