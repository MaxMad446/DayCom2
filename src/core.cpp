// Auto-generated module | 2026-05-14T06:12:46.959853
#include <iostream>
#include <vector>

int compute_371() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
