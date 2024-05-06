// Auto-generated module | 2026-05-14T18:27:22.357876
#include <iostream>
#include <vector>

int compute_188() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
