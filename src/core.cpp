// Auto-generated module | 2026-05-11T20:01:47.229964
#include <iostream>
#include <vector>

int compute_544() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
