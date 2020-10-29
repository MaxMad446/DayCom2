// Auto-generated module | 2026-05-12T19:58:13.683916
#include <iostream>
#include <vector>

int compute_722() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
