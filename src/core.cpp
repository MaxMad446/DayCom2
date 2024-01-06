// Auto-generated module | 2026-05-14T18:17:34.960020
#include <iostream>
#include <vector>

int compute_533() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
