// Auto-generated module | 2026-05-11T19:35:11.787023
#include <iostream>
#include <vector>

int compute_266() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_266() << std::endl;
    return 0;
}
