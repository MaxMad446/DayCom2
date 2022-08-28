// Auto-generated module | 2026-05-11T21:16:51.687397
#include <iostream>
#include <vector>

int compute_781() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_781() << std::endl;
    return 0;
}
