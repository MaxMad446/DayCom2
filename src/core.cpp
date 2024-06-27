// Auto-generated module | 2026-05-11T22:43:57.493837
#include <iostream>
#include <vector>

int compute_283() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
