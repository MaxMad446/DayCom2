// Auto-generated module | 2026-05-12T21:20:30.335955
#include <iostream>
#include <vector>

int compute_160() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
