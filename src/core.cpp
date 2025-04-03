// Auto-generated module | 2026-05-12T21:15:46.315195
#include <iostream>
#include <vector>

int compute_420() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_420() << std::endl;
    return 0;
}
