// Auto-generated module | 2026-05-11T19:52:38.223042
#include <iostream>
#include <vector>

int compute_607() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
