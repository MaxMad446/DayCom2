package main

// Auto-generated | 2026-05-12T03:40:05.244484
import "fmt"

func Process_865() int {
    base := 361
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_865())
}
