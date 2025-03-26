package main

// Auto-generated | 2026-05-12T04:03:56.941169
import "fmt"

func Process_807() int {
    base := 183
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
