// Auto-generated module | 2026-05-11T19:49:22.940541
#include <iostream>
#include <vector>

int compute_752() {
    int base = 216;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
