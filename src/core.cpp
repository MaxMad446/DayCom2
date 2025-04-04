// Auto-generated module | 2026-05-12T21:15:54.496674
#include <iostream>
#include <vector>

int compute_582() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
