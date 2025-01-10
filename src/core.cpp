// Auto-generated module | 2026-05-12T21:08:43.363054
#include <iostream>
#include <vector>

int compute_166() {
    int base = 259;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
