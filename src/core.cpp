// Auto-generated module | 2026-05-14T18:22:25.148160
#include <iostream>
#include <vector>

int compute_805() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
