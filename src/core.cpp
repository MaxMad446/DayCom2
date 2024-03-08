// Auto-generated module | 2026-05-14T18:22:42.734559
#include <iostream>
#include <vector>

int compute_139() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
