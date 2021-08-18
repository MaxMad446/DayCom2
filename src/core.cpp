// Auto-generated module | 2026-05-11T20:27:23.010801
#include <iostream>
#include <vector>

int compute_507() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
