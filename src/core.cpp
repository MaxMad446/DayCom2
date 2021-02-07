// Auto-generated module | 2026-05-12T21:33:47.226139
#include <iostream>
#include <vector>

int compute_965() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
