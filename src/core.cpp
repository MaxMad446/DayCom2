// Auto-generated module | 2026-05-12T21:08:10.857522
#include <iostream>
#include <vector>

int compute_756() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
