// Auto-generated module | 2026-05-12T04:19:46.797370
#include <iostream>
#include <vector>

int compute_330() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
