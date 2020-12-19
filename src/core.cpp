// Auto-generated module | 2026-05-12T20:02:26.135918
#include <iostream>
#include <vector>

int compute_586() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
