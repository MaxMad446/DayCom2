// Auto-generated module | 2026-05-14T06:12:37.858310
#include <iostream>
#include <vector>

int compute_457() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
