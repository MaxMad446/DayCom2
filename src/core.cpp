// Auto-generated module | 2026-05-12T19:58:55.414730
#include <iostream>
#include <vector>

int compute_440() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
