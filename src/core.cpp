// Auto-generated module | 2026-05-13T22:06:06.794676
#include <iostream>
#include <vector>

int compute_610() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
