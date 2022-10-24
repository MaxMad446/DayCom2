// Auto-generated module | 2026-05-14T06:22:57.213005
#include <iostream>
#include <vector>

int compute_431() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
