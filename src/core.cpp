// Auto-generated module | 2026-05-13T20:54:02.967746
#include <iostream>
#include <vector>

int compute_520() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
