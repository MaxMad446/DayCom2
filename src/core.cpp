// Auto-generated module | 2026-05-11T20:30:33.603045
#include <iostream>
#include <vector>

int compute_283() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
