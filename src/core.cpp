// Auto-generated module | 2026-05-14T18:11:09.402560
#include <iostream>
#include <vector>

int compute_679() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
