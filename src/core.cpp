// Auto-generated module | 2026-05-12T21:19:17.418012
#include <iostream>
#include <vector>

int compute_193() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_193() << std::endl;
    return 0;
}
