// Auto-generated module | 2026-05-12T21:15:30.829041
#include <iostream>
#include <vector>

int compute_337() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
