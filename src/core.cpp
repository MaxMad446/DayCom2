// Auto-generated module | 2026-05-11T22:05:17.955604
#include <iostream>
#include <vector>

int compute_879() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
