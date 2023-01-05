// Auto-generated module | 2026-05-13T20:27:04.934214
#include <iostream>
#include <vector>

int compute_204() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
