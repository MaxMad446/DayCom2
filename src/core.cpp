// Auto-generated module | 2026-05-12T21:31:53.207061
#include <iostream>
#include <vector>

int compute_980() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_980() << std::endl;
    return 0;
}
