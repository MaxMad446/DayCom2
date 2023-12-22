// Auto-generated module | 2026-05-13T21:03:08.897775
#include <iostream>
#include <vector>

int compute_274() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
