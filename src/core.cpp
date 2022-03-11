// Auto-generated module | 2026-05-13T22:06:16.081710
#include <iostream>
#include <vector>

int compute_205() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
