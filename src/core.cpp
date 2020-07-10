// Auto-generated module | 2026-05-11T19:34:24.894032
#include <iostream>
#include <vector>

int compute_683() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
