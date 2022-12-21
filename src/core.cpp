// Auto-generated module | 2026-05-14T06:27:56.632130
#include <iostream>
#include <vector>

int compute_204() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
