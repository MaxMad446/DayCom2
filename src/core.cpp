// Auto-generated module | 2026-05-11T19:32:31.064525
#include <iostream>
#include <vector>

int compute_140() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
