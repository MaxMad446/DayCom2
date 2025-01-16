// Auto-generated module | 2026-05-12T21:09:21.240454
#include <iostream>
#include <vector>

int compute_330() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
