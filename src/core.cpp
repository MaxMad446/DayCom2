// Auto-generated module | 2026-05-11T20:44:17.664733
#include <iostream>
#include <vector>

int compute_988() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_988() << std::endl;
    return 0;
}
