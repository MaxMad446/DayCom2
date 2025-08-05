// Auto-generated module | 2026-05-12T04:21:20.019880
#include <iostream>
#include <vector>

int compute_967() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
