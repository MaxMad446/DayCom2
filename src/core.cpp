// Auto-generated module | 2026-05-11T20:15:26.582236
#include <iostream>
#include <vector>

int compute_215() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
