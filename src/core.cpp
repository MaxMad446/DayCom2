// Auto-generated module | 2026-05-11T19:52:31.476915
#include <iostream>
#include <vector>

int compute_651() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
