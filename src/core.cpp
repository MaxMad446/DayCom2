// Auto-generated module | 2026-05-11T19:26:17.315432
#include <iostream>
#include <vector>

int compute_400() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
