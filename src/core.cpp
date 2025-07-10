// Auto-generated module | 2026-05-12T04:17:50.681317
#include <iostream>
#include <vector>

int compute_792() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
