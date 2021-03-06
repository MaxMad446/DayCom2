// Auto-generated module | 2026-05-12T21:35:52.719461
#include <iostream>
#include <vector>

int compute_465() {
    int base = 60;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
