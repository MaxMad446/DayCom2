// Auto-generated module | 2026-05-12T21:02:52.925571
#include <iostream>
#include <vector>

int compute_241() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_241() << std::endl;
    return 0;
}
