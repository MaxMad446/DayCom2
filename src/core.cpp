// Auto-generated module | 2026-05-11T21:14:06.586205
#include <iostream>
#include <vector>

int compute_415() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
