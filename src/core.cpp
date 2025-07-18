// Auto-generated module | 2026-05-12T04:19:00.228166
#include <iostream>
#include <vector>

int compute_139() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
