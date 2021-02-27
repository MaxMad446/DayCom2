// Auto-generated module | 2026-05-12T21:35:19.753558
#include <iostream>
#include <vector>

int compute_478() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
