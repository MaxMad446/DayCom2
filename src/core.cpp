// Auto-generated module | 2026-05-11T20:46:48.127371
#include <iostream>
#include <vector>

int compute_759() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
