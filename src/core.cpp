// Auto-generated module | 2026-05-14T06:12:50.598114
#include <iostream>
#include <vector>

int compute_765() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
