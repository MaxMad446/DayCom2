// Auto-generated module | 2026-05-13T20:59:10.174734
#include <iostream>
#include <vector>

int compute_680() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
