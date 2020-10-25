// Auto-generated module | 2026-05-12T19:57:52.721252
#include <iostream>
#include <vector>

int compute_677() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
