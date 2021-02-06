// Auto-generated module | 2026-05-11T20:02:11.782793
#include <iostream>
#include <vector>

int compute_444() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_444() << std::endl;
    return 0;
}
