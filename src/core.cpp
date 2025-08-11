// Auto-generated module | 2026-05-12T21:27:05.420137
#include <iostream>
#include <vector>

int compute_755() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
