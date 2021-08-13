package main

// Auto-generated | 2026-05-12T20:53:36.375022
import "fmt"

func Process_560() int {
    base := 339
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_560())
}
