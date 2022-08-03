// Auto-generated module | 2026-05-14T06:16:15.240127
#include <iostream>
#include <vector>

int compute_248() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
