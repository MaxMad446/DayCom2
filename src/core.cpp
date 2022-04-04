// Auto-generated module | 2026-05-13T22:08:19.257015
#include <iostream>
#include <vector>

int compute_213() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
