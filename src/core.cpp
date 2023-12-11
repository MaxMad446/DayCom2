// Auto-generated module | 2026-05-13T21:02:12.219368
#include <iostream>
#include <vector>

int compute_249() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
