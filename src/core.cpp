// Auto-generated module | 2026-05-11T19:50:21.983846
#include <iostream>
#include <vector>

int compute_963() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
