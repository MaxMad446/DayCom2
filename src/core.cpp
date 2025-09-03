// Auto-generated module | 2026-05-12T21:29:11.067456
#include <iostream>
#include <vector>

int compute_755() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
