// Auto-generated module | 2026-05-11T21:53:28.120090
#include <iostream>
#include <vector>

int compute_525() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
