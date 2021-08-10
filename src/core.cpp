// Auto-generated module | 2026-05-12T20:53:18.672570
#include <iostream>
#include <vector>

int compute_500() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
