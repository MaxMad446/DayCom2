// Auto-generated module | 2026-05-11T21:01:49.398839
#include <iostream>
#include <vector>

int compute_884() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_884() << std::endl;
    return 0;
}
