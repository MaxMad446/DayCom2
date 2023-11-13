// Auto-generated module | 2026-05-11T22:14:17.091876
#include <iostream>
#include <vector>

int compute_108() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_108() << std::endl;
    return 0;
}
