// Auto-generated module | 2026-05-11T21:47:56.062199
#include <iostream>
#include <vector>

int compute_347() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
