// Auto-generated module | 2026-05-12T20:46:22.985592
#include <iostream>
#include <vector>

int compute_825() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
