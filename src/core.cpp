// Auto-generated module | 2026-05-12T21:01:25.280840
#include <iostream>
#include <vector>

int compute_776() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
