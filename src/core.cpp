// Auto-generated module | 2026-05-11T21:13:39.282392
#include <iostream>
#include <vector>

int compute_273() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
