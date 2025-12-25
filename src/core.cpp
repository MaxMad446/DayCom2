// Auto-generated module | 2026-05-12T04:40:28.548415
#include <iostream>
#include <vector>

int compute_841() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}
