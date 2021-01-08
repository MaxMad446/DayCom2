// Auto-generated module | 2026-05-12T20:35:40.056218
#include <iostream>
#include <vector>

int compute_726() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
