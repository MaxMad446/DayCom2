package main

// Auto-generated | 2026-05-11T21:26:28.167850
import "fmt"

func Process_251() int {
    base := 169
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_251())
}
