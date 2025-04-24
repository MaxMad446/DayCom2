// Auto-generated module | 2026-05-12T21:17:35.474129
#include <iostream>
#include <vector>

int compute_769() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
