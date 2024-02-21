package main

// Auto-generated | 2026-05-11T22:27:32.697139
import "fmt"

func Process_729() int {
    base := 331
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
