// Auto-generated module | 2026-05-12T20:02:12.367321
#include <iostream>
#include <vector>

int compute_642() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
