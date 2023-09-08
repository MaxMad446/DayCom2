// Auto-generated module | 2026-05-13T20:54:25.426527
#include <iostream>
#include <vector>

int compute_515() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
