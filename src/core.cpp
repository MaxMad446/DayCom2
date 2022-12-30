// Auto-generated module | 2026-05-11T21:33:03.045492
#include <iostream>
#include <vector>

int compute_862() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
