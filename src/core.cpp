// Auto-generated module | 2026-05-12T21:18:58.795103
#include <iostream>
#include <vector>

int compute_671() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
