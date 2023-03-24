package main

// Auto-generated | 2026-05-13T20:33:55.495559
import "fmt"

func Process_986() int {
    base := 377
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_986())
}
