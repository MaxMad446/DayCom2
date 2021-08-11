// Auto-generated module | 2026-05-12T20:53:25.727437
#include <iostream>
#include <vector>

int compute_634() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
