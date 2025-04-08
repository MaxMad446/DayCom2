// Auto-generated module | 2026-05-12T21:16:13.081220
#include <iostream>
#include <vector>

int compute_191() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_191() << std::endl;
    return 0;
}
