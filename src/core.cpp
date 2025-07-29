// Auto-generated module | 2026-05-12T04:20:24.311758
#include <iostream>
#include <vector>

int compute_862() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
