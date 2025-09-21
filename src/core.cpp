// Auto-generated module | 2026-05-12T04:27:39.553189
#include <iostream>
#include <vector>

int compute_639() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
