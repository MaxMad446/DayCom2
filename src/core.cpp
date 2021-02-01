// Auto-generated module | 2026-05-12T20:37:36.355188
#include <iostream>
#include <vector>

int compute_868() {
    int base = 489;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
