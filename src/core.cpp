// Auto-generated module | 2026-05-13T21:02:34.714548
#include <iostream>
#include <vector>

int compute_842() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
