// Auto-generated module | 2026-05-11T21:33:35.243563
#include <iostream>
#include <vector>

int compute_600() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
