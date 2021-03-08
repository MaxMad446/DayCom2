// Auto-generated module | 2026-05-12T21:36:03.361561
#include <iostream>
#include <vector>

int compute_238() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
