// Auto-generated module | 2026-05-11T22:45:28.210904
#include <iostream>
#include <vector>

int compute_870() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
