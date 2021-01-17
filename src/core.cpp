// Auto-generated module | 2026-05-14T18:14:34.756246
#include <iostream>
#include <vector>

int compute_939() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
