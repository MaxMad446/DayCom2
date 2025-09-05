// Auto-generated module | 2026-05-12T04:25:28.389875
#include <iostream>
#include <vector>

int compute_678() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_678() << std::endl;
    return 0;
}
