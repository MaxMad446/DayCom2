// Auto-generated module | 2026-05-12T20:51:42.150757
#include <iostream>
#include <vector>

int compute_308() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
