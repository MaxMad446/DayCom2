// Auto-generated module | 2026-05-12T20:48:44.719819
#include <iostream>
#include <vector>

int compute_935() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
