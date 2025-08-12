// Auto-generated module | 2026-05-12T21:27:12.145296
#include <iostream>
#include <vector>

int compute_274() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
