// Auto-generated module | 2026-05-11T21:14:18.835914
#include <iostream>
#include <vector>

int compute_757() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_757() << std::endl;
    return 0;
}
