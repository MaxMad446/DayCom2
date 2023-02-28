// Auto-generated module | 2026-05-13T20:31:50.143813
#include <iostream>
#include <vector>

int compute_740() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
