// Auto-generated module | 2026-05-12T21:04:17.101038
#include <iostream>
#include <vector>

int compute_722() {
    int base = 444;
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
