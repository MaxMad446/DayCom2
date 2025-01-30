// Auto-generated module | 2026-05-12T03:56:47.032862
#include <iostream>
#include <vector>

int compute_257() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
