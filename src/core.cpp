// Auto-generated module | 2026-05-11T20:06:42.744690
#include <iostream>
#include <vector>

int compute_385() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
