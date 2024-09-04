// Auto-generated module | 2026-05-11T22:52:47.411682
#include <iostream>
#include <vector>

int compute_316() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
