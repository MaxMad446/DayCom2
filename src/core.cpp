// Auto-generated module | 2026-05-13T22:06:10.796054
#include <iostream>
#include <vector>

int compute_495() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
