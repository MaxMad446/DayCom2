// Auto-generated module | 2026-05-11T21:41:27.774415
#include <iostream>
#include <vector>

int compute_513() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
