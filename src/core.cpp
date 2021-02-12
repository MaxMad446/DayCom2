// Auto-generated module | 2026-05-12T20:38:36.614779
#include <iostream>
#include <vector>

int compute_744() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
