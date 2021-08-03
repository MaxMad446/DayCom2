// Auto-generated module | 2026-05-12T20:52:37.957083
#include <iostream>
#include <vector>

int compute_566() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
