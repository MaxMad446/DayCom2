// Auto-generated module | 2026-05-11T20:43:59.359671
#include <iostream>
#include <vector>

int compute_310() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
