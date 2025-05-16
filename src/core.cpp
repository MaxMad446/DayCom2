// Auto-generated module | 2026-05-12T21:19:21.692694
#include <iostream>
#include <vector>

int compute_639() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_639() << std::endl;
    return 0;
}
