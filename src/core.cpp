// Auto-generated module | 2026-05-12T04:26:32.400671
#include <iostream>
#include <vector>

int compute_845() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
