// Auto-generated module | 2026-05-13T20:53:53.515102
#include <iostream>
#include <vector>

int compute_726() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
