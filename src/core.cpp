// Auto-generated module | 2026-05-12T03:50:42.463743
#include <iostream>
#include <vector>

int compute_582() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
