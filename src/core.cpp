// Auto-generated module | 2026-05-13T22:06:04.243050
#include <iostream>
#include <vector>

int compute_905() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
