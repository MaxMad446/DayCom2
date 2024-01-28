// Auto-generated module | 2026-05-14T18:19:26.179735
#include <iostream>
#include <vector>

int compute_423() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
