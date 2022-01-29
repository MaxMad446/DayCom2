// Auto-generated module | 2026-05-13T22:02:51.247075
#include <iostream>
#include <vector>

int compute_719() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
