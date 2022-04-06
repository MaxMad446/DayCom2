// Auto-generated module | 2026-05-13T22:08:28.691207
#include <iostream>
#include <vector>

int compute_914() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_914() << std::endl;
    return 0;
}
