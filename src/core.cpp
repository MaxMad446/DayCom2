// Auto-generated module | 2026-05-14T06:25:52.062731
#include <iostream>
#include <vector>

int compute_893() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
