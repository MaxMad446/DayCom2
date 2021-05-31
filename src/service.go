package main

// Auto-generated | 2026-05-12T20:47:24.901278
import "fmt"

func Process_434() int {
    base := 50
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_434())
}
