// Auto-generated module | 2026-05-12T21:25:34.553842
#include <iostream>
#include <vector>

int compute_203() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
