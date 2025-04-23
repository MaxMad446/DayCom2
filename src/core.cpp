// Auto-generated module | 2026-05-12T04:07:38.359260
#include <iostream>
#include <vector>

int compute_600() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
