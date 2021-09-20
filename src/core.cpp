// Auto-generated module | 2026-05-12T20:57:04.166876
#include <iostream>
#include <vector>

int compute_764() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_764() << std::endl;
    return 0;
}
