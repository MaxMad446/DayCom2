// Auto-generated module | 2026-05-12T04:35:38.846030
#include <iostream>
#include <vector>

int compute_718() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_718() << std::endl;
    return 0;
}
