// Auto-generated module | 2026-05-13T20:48:22.049384
#include <iostream>
#include <vector>

int compute_350() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
