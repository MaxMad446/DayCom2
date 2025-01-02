// Auto-generated module | 2026-05-12T03:53:15.553700
#include <iostream>
#include <vector>

int compute_289() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
