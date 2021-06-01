// Auto-generated module | 2026-05-12T20:47:30.132777
#include <iostream>
#include <vector>

int compute_988() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_988() << std::endl;
    return 0;
}
