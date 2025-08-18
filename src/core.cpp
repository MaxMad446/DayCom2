// Auto-generated module | 2026-05-12T04:23:01.392376
#include <iostream>
#include <vector>

int compute_247() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
