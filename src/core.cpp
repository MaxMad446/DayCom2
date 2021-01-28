// Auto-generated module | 2026-05-14T18:16:06.312575
#include <iostream>
#include <vector>

int compute_483() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
