// Auto-generated module | 2026-05-11T19:48:55.347238
#include <iostream>
#include <vector>

int compute_683() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_683() << std::endl;
    return 0;
}
