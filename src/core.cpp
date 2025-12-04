// Auto-generated module | 2026-05-12T04:37:30.164302
#include <iostream>
#include <vector>

int compute_194() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
