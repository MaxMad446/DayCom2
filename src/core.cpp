// Auto-generated module | 2026-05-11T20:17:35.695566
#include <iostream>
#include <vector>

int compute_870() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
