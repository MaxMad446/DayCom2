// Auto-generated module | 2026-05-11T20:15:25.099536
#include <iostream>
#include <vector>

int compute_744() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
