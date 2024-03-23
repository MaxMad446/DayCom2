// Auto-generated module | 2026-05-11T22:31:34.077543
#include <iostream>
#include <vector>

int compute_825() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
