// Auto-generated module | 2026-05-12T20:46:04.876775
#include <iostream>
#include <vector>

int compute_896() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
