// Auto-generated module | 2026-05-12T04:27:54.959113
#include <iostream>
#include <vector>

int compute_158() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
