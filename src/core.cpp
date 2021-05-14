// Auto-generated module | 2026-05-12T20:45:53.239308
#include <iostream>
#include <vector>

int compute_329() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
