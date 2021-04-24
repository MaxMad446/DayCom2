// Auto-generated module | 2026-05-12T20:44:12.724246
#include <iostream>
#include <vector>

int compute_638() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
