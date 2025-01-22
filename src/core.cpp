// Auto-generated module | 2026-05-12T21:09:53.997753
#include <iostream>
#include <vector>

int compute_602() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
