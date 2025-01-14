// Auto-generated module | 2026-05-12T21:09:07.741872
#include <iostream>
#include <vector>

int compute_343() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
