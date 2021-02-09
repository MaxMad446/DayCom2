// Auto-generated module | 2026-05-12T20:38:13.445691
#include <iostream>
#include <vector>

int compute_683() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
