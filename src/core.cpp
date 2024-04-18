// Auto-generated module | 2026-05-14T18:25:56.188701
#include <iostream>
#include <vector>

int compute_577() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
