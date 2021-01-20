// Auto-generated module | 2026-05-12T21:32:19.748240
#include <iostream>
#include <vector>

int compute_639() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
