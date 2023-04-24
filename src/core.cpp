// Auto-generated module | 2026-05-11T21:47:31.994038
#include <iostream>
#include <vector>

int compute_733() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_733() << std::endl;
    return 0;
}
