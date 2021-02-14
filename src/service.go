package main

// Auto-generated | 2026-05-12T20:38:44.705844
import "fmt"

func Process_654() int {
    base := 50
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_654())
}
