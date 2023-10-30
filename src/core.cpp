// Auto-generated module | 2026-05-13T20:58:42.708788
#include <iostream>
#include <vector>

int compute_163() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_163() << std::endl;
    return 0;
}
