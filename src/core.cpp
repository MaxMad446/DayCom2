// Auto-generated module | 2026-05-11T21:44:05.363199
#include <iostream>
#include <vector>

int compute_641() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
