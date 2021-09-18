package main

// Auto-generated | 2026-05-11T20:31:21.050114
import "fmt"

func Process_865() int {
    base := 21
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_865())
}
