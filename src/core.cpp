// Auto-generated module | 2026-05-12T04:29:27.662776
#include <iostream>
#include <vector>

int compute_257() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
