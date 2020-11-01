// Auto-generated module | 2026-05-14T18:04:15.708935
#include <iostream>
#include <vector>

int compute_489() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
