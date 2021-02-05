// Auto-generated module | 2026-05-12T21:33:35.061080
#include <iostream>
#include <vector>

int compute_349() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
