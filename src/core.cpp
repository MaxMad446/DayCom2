// Auto-generated module | 2026-05-12T04:34:01.435269
#include <iostream>
#include <vector>

int compute_440() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_440() << std::endl;
    return 0;
}
