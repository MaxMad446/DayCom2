// Auto-generated module | 2026-05-12T04:26:19.299585
#include <iostream>
#include <vector>

int compute_445() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_445() << std::endl;
    return 0;
}
