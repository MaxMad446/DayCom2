// Auto-generated module | 2026-05-12T21:08:33.627589
#include <iostream>
#include <vector>

int compute_332() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
