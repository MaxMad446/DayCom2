// Auto-generated module | 2026-05-11T19:40:38.927815
#include <iostream>
#include <vector>

int compute_893() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
