package main

// Auto-generated | 2026-05-11T21:43:32.968030
import "fmt"

func Process_603() int {
    base := 165
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_603())
}
