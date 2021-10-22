// Auto-generated module | 2026-05-12T20:59:38.410359
#include <iostream>
#include <vector>

int compute_775() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_775() << std::endl;
    return 0;
}
