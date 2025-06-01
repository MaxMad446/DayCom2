// Auto-generated module | 2026-05-12T04:12:39.599393
#include <iostream>
#include <vector>

int compute_799() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
