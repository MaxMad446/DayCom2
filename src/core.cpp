// Auto-generated module | 2026-05-11T22:14:40.184984
#include <iostream>
#include <vector>

int compute_682() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_682() << std::endl;
    return 0;
}
