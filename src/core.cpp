// Auto-generated module | 2026-05-13T20:52:48.516765
#include <iostream>
#include <vector>

int compute_880() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
