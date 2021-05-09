package main

// Auto-generated | 2026-05-12T20:45:29.720933
import "fmt"

func Process_743() int {
    base := 477
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_743())
}
