// Auto-generated module | 2026-05-12T20:52:46.550779
#include <iostream>
#include <vector>

int compute_610() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_610() << std::endl;
    return 0;
}
