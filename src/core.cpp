// Auto-generated module | 2026-05-12T20:42:08.564094
#include <iostream>
#include <vector>

int compute_233() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
