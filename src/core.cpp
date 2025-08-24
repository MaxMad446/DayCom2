// Auto-generated module | 2026-05-12T21:28:16.622061
#include <iostream>
#include <vector>

int compute_139() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
