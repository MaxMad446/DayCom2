// Auto-generated module | 2026-05-12T04:15:16.910305
#include <iostream>
#include <vector>

int compute_568() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
