// Auto-generated module | 2026-05-12T04:35:37.534061
#include <iostream>
#include <vector>

int compute_409() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_409() << std::endl;
    return 0;
}
