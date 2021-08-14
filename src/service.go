package main

// Auto-generated | 2026-05-12T20:53:39.105468
import "fmt"

func Process_470() int {
    base := 381
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_470())
}
