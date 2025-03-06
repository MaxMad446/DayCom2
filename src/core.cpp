// Auto-generated module | 2026-05-12T04:01:35.273505
#include <iostream>
#include <vector>

int compute_273() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
