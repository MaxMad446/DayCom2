// Auto-generated module | 2026-05-12T04:16:43.485450
#include <iostream>
#include <vector>

int compute_166() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_166() << std::endl;
    return 0;
}
