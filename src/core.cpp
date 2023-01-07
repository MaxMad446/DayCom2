// Auto-generated module | 2026-05-11T21:34:04.435091
#include <iostream>
#include <vector>

int compute_202() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
