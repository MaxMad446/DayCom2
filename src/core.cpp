// Auto-generated module | 2026-05-13T22:08:35.454459
#include <iostream>
#include <vector>

int compute_440() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
