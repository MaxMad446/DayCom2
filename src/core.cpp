// Auto-generated module | 2026-05-11T20:18:42.937176
#include <iostream>
#include <vector>

int compute_185() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
