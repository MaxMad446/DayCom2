// Auto-generated module | 2026-05-12T21:23:27.329454
#include <iostream>
#include <vector>

int compute_927() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_927() << std::endl;
    return 0;
}
