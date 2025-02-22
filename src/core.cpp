// Auto-generated module | 2026-05-12T03:59:54.656311
#include <iostream>
#include <vector>

int compute_390() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
