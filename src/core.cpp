// Auto-generated module | 2026-05-11T20:55:01.739592
#include <iostream>
#include <vector>

int compute_836() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
