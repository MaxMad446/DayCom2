// Auto-generated module | 2026-05-12T21:40:13.258065
#include <iostream>
#include <vector>

int compute_722() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_722() << std::endl;
    return 0;
}
