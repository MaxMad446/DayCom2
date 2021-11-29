// Auto-generated module | 2026-05-12T21:03:02.693644
#include <iostream>
#include <vector>

int compute_471() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
