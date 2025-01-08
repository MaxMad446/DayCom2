// Auto-generated module | 2026-05-12T03:54:01.797372
#include <iostream>
#include <vector>

int compute_452() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
