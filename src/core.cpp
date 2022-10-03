// Auto-generated module | 2026-05-14T06:21:17.811152
#include <iostream>
#include <vector>

int compute_613() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
