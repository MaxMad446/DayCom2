// Auto-generated module | 2026-05-13T20:36:29.704118
#include <iostream>
#include <vector>

int compute_645() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
