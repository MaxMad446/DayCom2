// Auto-generated module | 2026-05-11T20:48:37.002207
#include <iostream>
#include <vector>

int compute_409() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
