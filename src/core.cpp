// Auto-generated module | 2026-05-12T20:58:43.182240
#include <iostream>
#include <vector>

int compute_323() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
