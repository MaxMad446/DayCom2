// Auto-generated module | 2026-05-11T21:13:54.563169
#include <iostream>
#include <vector>

int compute_862() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
