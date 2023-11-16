// Auto-generated module | 2026-05-13T21:00:06.004252
#include <iostream>
#include <vector>

int compute_817() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_817() << std::endl;
    return 0;
}
