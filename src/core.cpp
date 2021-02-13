// Auto-generated module | 2026-05-12T20:38:41.997397
#include <iostream>
#include <vector>

int compute_559() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_559() << std::endl;
    return 0;
}
