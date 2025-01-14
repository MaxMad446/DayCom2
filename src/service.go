package main

// Auto-generated | 2026-05-12T21:09:07.741516
import "fmt"

func Process_853() int {
    base := 331
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_853())
}
