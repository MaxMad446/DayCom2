// Auto-generated module | 2026-05-14T18:18:21.974799
#include <iostream>
#include <vector>

int compute_758() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
