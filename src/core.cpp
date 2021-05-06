// Auto-generated module | 2026-05-12T21:41:14.710881
#include <iostream>
#include <vector>

int compute_733() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
