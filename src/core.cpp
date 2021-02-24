// Auto-generated module | 2026-05-12T21:35:05.860093
#include <iostream>
#include <vector>

int compute_662() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_662() << std::endl;
    return 0;
}
