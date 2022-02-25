// Auto-generated module | 2026-05-13T22:05:10.483884
#include <iostream>
#include <vector>

int compute_109() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_109() << std::endl;
    return 0;
}
