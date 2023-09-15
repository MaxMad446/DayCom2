package main

// Auto-generated | 2026-05-13T20:54:55.333777
import "fmt"

func Process_602() int {
    base := 450
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
