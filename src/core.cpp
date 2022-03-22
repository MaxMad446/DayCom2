// Auto-generated module | 2026-05-13T22:07:10.715050
#include <iostream>
#include <vector>

int compute_224() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
