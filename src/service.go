package main

// Auto-generated | 2026-05-12T20:45:24.295373
import "fmt"

func Process_402() int {
    base := 318
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
