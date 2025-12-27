// Auto-generated module | 2026-05-12T04:40:48.615495
#include <iostream>
#include <vector>

int compute_737() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
