// Auto-generated module | 2026-05-11T19:26:54.844606
#include <iostream>
#include <vector>

int compute_774() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
