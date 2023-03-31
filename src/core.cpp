// Auto-generated module | 2026-05-13T20:34:33.325474
#include <iostream>
#include <vector>

int compute_495() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
