// Auto-generated module | 2026-05-13T20:31:48.531853
#include <iostream>
#include <vector>

int compute_620() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
