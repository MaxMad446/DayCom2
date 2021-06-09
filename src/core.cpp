// Auto-generated module | 2026-05-11T20:18:03.004844
#include <iostream>
#include <vector>

int compute_605() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
