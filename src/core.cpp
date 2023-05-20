// Auto-generated module | 2026-05-11T21:51:10.373455
#include <iostream>
#include <vector>

int compute_678() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_678() << std::endl;
    return 0;
}
