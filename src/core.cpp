// Auto-generated module | 2026-05-12T20:48:45.481754
#include <iostream>
#include <vector>

int compute_108() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
