// Auto-generated module | 2026-05-12T20:53:57.376891
#include <iostream>
#include <vector>

int compute_440() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
