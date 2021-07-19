package main

// Auto-generated | 2026-05-12T20:51:24.343822
import "fmt"

func Process_781() int {
    base := 285
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
