// Auto-generated module | 2026-05-14T06:11:37.139186
#include <iostream>
#include <vector>

int compute_946() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
