// Auto-generated module | 2026-05-11T19:40:20.643960
#include <iostream>
#include <vector>

int compute_515() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
