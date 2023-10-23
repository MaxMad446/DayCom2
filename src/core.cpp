// Auto-generated module | 2026-05-13T20:58:06.932419
#include <iostream>
#include <vector>

int compute_413() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_413() << std::endl;
    return 0;
}
