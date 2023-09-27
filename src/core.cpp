// Auto-generated module | 2026-05-11T22:08:08.247395
#include <iostream>
#include <vector>

int compute_542() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
