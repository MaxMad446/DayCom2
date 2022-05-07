// Auto-generated module | 2026-05-13T22:11:17.207214
#include <iostream>
#include <vector>

int compute_497() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
