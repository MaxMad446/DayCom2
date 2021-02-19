// Auto-generated module | 2026-05-12T21:34:43.155987
#include <iostream>
#include <vector>

int compute_678() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_678() << std::endl;
    return 0;
}
