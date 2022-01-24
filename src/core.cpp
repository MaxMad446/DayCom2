// Auto-generated module | 2026-05-11T20:48:11.547825
#include <iostream>
#include <vector>

int compute_386() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
