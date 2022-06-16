// Auto-generated module | 2026-05-11T21:07:00.505742
#include <iostream>
#include <vector>

int compute_732() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
