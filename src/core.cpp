// Auto-generated module | 2026-05-12T21:36:21.682597
#include <iostream>
#include <vector>

int compute_826() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_826() << std::endl;
    return 0;
}
