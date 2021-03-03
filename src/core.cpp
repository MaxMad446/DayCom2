// Auto-generated module | 2026-05-11T20:05:38.488155
#include <iostream>
#include <vector>

int compute_337() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
