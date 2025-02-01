// Auto-generated module | 2026-05-12T21:10:44.729725
#include <iostream>
#include <vector>

int compute_552() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
