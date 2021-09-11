// Auto-generated module | 2026-05-12T20:56:11.993691
#include <iostream>
#include <vector>

int compute_661() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
