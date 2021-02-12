// Auto-generated module | 2026-05-12T20:38:31.154043
#include <iostream>
#include <vector>

int compute_450() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
