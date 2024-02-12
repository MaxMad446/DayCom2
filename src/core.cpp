// Auto-generated module | 2026-05-14T18:20:37.479171
#include <iostream>
#include <vector>

int compute_454() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
