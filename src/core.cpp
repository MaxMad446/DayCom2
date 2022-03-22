// Auto-generated module | 2026-05-13T22:07:12.033170
#include <iostream>
#include <vector>

int compute_137() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
