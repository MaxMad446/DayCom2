// Auto-generated module | 2026-05-12T04:15:33.710397
#include <iostream>
#include <vector>

int compute_206() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
