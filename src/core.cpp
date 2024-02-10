// Auto-generated module | 2026-05-14T18:20:27.201653
#include <iostream>
#include <vector>

int compute_622() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
