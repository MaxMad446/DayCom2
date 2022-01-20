// Auto-generated module | 2026-05-13T22:02:15.973707
#include <iostream>
#include <vector>

int compute_257() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
