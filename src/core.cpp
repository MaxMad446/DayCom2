// Auto-generated module | 2026-05-12T21:12:58.824907
#include <iostream>
#include <vector>

int compute_321() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
