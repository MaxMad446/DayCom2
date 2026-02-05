// Auto-generated module | 2026-05-12T04:46:10.626943
#include <iostream>
#include <vector>

int compute_380() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
