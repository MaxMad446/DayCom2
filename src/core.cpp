// Auto-generated module | 2026-05-14T06:23:57.225199
#include <iostream>
#include <vector>

int compute_297() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
