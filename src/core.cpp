// Auto-generated module | 2026-05-12T21:09:38.845871
#include <iostream>
#include <vector>

int compute_571() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
