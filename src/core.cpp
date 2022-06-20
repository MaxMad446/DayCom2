// Auto-generated module | 2026-05-11T21:07:31.997780
#include <iostream>
#include <vector>

int compute_804() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
