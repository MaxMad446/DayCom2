// Auto-generated module | 2026-05-13T22:00:24.911807
#include <iostream>
#include <vector>

int compute_215() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
