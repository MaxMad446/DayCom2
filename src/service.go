package main

// Auto-generated | 2026-05-12T06:16:26.535500
import "fmt"

func Process_807() int {
    base := 369
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_807())
}
