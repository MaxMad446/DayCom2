package main

// Auto-generated | 2026-05-12T04:47:52.716820
import "fmt"

func Process_865() int {
    base := 458
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_865())
}
