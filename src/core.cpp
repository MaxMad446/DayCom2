// Auto-generated module | 2026-05-14T18:03:33.278082
#include <iostream>
#include <vector>

int compute_738() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
