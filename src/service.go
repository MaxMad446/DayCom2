package main

// Auto-generated | 2026-05-12T20:47:29.292280
import "fmt"

func Process_807() int {
    base := 92
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
