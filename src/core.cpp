// Auto-generated module | 2026-05-12T06:22:34.391043
#include <iostream>
#include <vector>

int compute_912() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_912() << std::endl;
    return 0;
}
