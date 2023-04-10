// Auto-generated module | 2026-05-13T20:35:17.882917
#include <iostream>
#include <vector>

int compute_455() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
