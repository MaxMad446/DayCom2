// Auto-generated module | 2026-05-12T20:58:01.699030
#include <iostream>
#include <vector>

int compute_306() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
