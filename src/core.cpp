// Auto-generated module | 2026-05-12T21:21:56.598819
#include <iostream>
#include <vector>

int compute_821() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_821() << std::endl;
    return 0;
}
