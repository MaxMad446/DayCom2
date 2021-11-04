// Auto-generated module | 2026-05-12T21:00:46.513706
#include <iostream>
#include <vector>

int compute_835() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
