// Auto-generated module | 2026-05-12T21:32:25.636164
#include <iostream>
#include <vector>

int compute_833() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
