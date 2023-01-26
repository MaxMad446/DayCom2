package main

// Auto-generated | 2026-05-13T20:29:01.012149
import "fmt"

func Process_114() int {
    base := 379
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_114())
}
