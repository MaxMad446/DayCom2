// Auto-generated module | 2026-05-11T22:43:39.338208
#include <iostream>
#include <vector>

int compute_398() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
