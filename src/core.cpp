// Auto-generated module | 2026-05-12T20:56:33.518942
#include <iostream>
#include <vector>

int compute_718() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
