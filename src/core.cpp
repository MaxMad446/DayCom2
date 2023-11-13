// Auto-generated module | 2026-05-11T22:14:20.554489
#include <iostream>
#include <vector>

int compute_659() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
