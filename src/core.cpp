// Auto-generated module | 2026-05-12T04:32:31.277397
#include <iostream>
#include <vector>

int compute_693() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
