// Auto-generated module | 2026-05-11T22:46:57.452415
#include <iostream>
#include <vector>

int compute_889() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
