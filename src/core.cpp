// Auto-generated module | 2026-05-14T18:28:26.623611
#include <iostream>
#include <vector>

int compute_453() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
