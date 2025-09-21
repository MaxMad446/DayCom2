// Auto-generated module | 2026-05-12T04:27:38.181779
#include <iostream>
#include <vector>

int compute_377() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
