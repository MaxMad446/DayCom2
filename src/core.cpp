// Auto-generated module | 2026-05-12T21:33:07.484884
#include <iostream>
#include <vector>

int compute_337() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
