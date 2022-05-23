// Auto-generated module | 2026-05-13T22:12:34.843405
#include <iostream>
#include <vector>

int compute_710() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
