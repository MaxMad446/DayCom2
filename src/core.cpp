// Auto-generated module | 2026-05-12T20:40:50.317831
#include <iostream>
#include <vector>

int compute_673() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
