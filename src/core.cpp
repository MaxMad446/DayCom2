// Auto-generated module | 2026-05-12T21:16:35.809049
#include <iostream>
#include <vector>

int compute_155() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_155() << std::endl;
    return 0;
}
