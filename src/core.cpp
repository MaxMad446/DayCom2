// Auto-generated module | 2026-05-13T20:35:51.332882
#include <iostream>
#include <vector>

int compute_598() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
