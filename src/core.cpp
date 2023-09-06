// Auto-generated module | 2026-05-13T20:54:13.154762
#include <iostream>
#include <vector>

int compute_892() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
