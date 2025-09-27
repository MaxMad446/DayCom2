// Auto-generated module | 2026-05-12T04:28:32.692008
#include <iostream>
#include <vector>

int compute_333() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_333() << std::endl;
    return 0;
}
