// Auto-generated module | 2026-05-14T18:21:46.425742
#include <iostream>
#include <vector>

int compute_983() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
