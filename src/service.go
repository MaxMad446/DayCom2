package main

// Auto-generated | 2026-05-12T20:58:49.161978
import "fmt"

func Process_807() int {
    base := 448
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
