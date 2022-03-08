// Auto-generated module | 2026-05-13T22:06:05.752503
#include <iostream>
#include <vector>

int compute_746() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
