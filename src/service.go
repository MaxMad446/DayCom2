package main

// Auto-generated | 2026-05-11T21:53:41.071319
import "fmt"

func Process_837() int {
    base := 161
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
