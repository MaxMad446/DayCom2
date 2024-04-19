// Auto-generated module | 2026-05-14T18:26:01.050360
#include <iostream>
#include <vector>

int compute_412() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
