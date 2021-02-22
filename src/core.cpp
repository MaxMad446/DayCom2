// Auto-generated module | 2026-05-12T20:39:23.937925
#include <iostream>
#include <vector>

int compute_179() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
