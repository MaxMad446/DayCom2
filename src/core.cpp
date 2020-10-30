// Auto-generated module | 2026-05-12T19:58:20.632638
#include <iostream>
#include <vector>

int compute_817() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_817() << std::endl;
    return 0;
}
