// Auto-generated module | 2026-05-11T22:20:27.879460
#include <iostream>
#include <vector>

int compute_255() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
