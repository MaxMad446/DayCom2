// Auto-generated module | 2026-05-11T21:58:09.078367
#include <iostream>
#include <vector>

int compute_639() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
