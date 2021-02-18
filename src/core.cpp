// Auto-generated module | 2026-05-12T21:34:41.101045
#include <iostream>
#include <vector>

int compute_817() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_817() << std::endl;
    return 0;
}
