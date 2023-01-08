// Auto-generated module | 2026-05-11T21:34:08.335874
#include <iostream>
#include <vector>

int compute_158() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
