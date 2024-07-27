// Auto-generated module | 2026-05-11T22:47:52.822260
#include <iostream>
#include <vector>

int compute_832() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
