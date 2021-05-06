// Auto-generated module | 2026-05-12T20:45:16.025646
#include <iostream>
#include <vector>

int compute_250() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
