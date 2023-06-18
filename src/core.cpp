// Auto-generated module | 2026-05-13T20:47:48.007938
#include <iostream>
#include <vector>

int compute_327() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
