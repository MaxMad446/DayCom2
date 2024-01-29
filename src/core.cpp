// Auto-generated module | 2026-05-14T18:19:31.378765
#include <iostream>
#include <vector>

int compute_582() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_582() << std::endl;
    return 0;
}
