// Auto-generated module | 2026-05-11T19:39:05.066515
#include <iostream>
#include <vector>

int compute_332() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
