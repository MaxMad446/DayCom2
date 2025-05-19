// Auto-generated module | 2026-05-12T04:11:09.840271
#include <iostream>
#include <vector>

int compute_859() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
