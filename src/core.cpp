// Auto-generated module | 2026-05-12T04:20:01.453836
#include <iostream>
#include <vector>

int compute_847() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_847() << std::endl;
    return 0;
}
