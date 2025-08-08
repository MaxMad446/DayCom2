package main

// Auto-generated | 2026-05-12T21:26:49.623058
import "fmt"

func Process_920() int {
    base := 408
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_920())
}
