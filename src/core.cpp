// Auto-generated module | 2026-05-12T04:08:58.153118
#include <iostream>
#include <vector>

int compute_515() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
