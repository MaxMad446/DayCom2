// Auto-generated module | 2026-05-11T21:05:36.226367
#include <iostream>
#include <vector>

int compute_593() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
