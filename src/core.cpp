// Auto-generated module | 2026-05-13T22:11:06.670414
#include <iostream>
#include <vector>

int compute_621() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}
