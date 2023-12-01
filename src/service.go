package main

// Auto-generated | 2026-05-13T21:01:26.275420
import "fmt"

func Process_402() int {
    base := 359
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
