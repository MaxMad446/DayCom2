// Auto-generated module | 2026-05-14T18:23:34.427004
#include <iostream>
#include <vector>

int compute_336() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
