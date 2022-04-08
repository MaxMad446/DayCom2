// Auto-generated module | 2026-05-13T22:08:41.093192
#include <iostream>
#include <vector>

int compute_637() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
