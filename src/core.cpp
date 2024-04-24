// Auto-generated module | 2026-05-14T18:26:23.162542
#include <iostream>
#include <vector>

int compute_744() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
