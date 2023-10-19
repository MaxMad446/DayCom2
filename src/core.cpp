// Auto-generated module | 2026-05-11T22:11:02.071322
#include <iostream>
#include <vector>

int compute_731() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_731() << std::endl;
    return 0;
}
