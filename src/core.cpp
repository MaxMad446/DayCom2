// Auto-generated module | 2026-05-12T21:14:32.862441
#include <iostream>
#include <vector>

int compute_538() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_538() << std::endl;
    return 0;
}
