// Auto-generated module | 2026-05-11T19:47:47.852320
#include <iostream>
#include <vector>

int compute_186() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
