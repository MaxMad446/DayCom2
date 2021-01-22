// Auto-generated module | 2026-05-12T21:32:29.486765
#include <iostream>
#include <vector>

int compute_153() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_153() << std::endl;
    return 0;
}
