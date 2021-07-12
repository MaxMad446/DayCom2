package main

// Auto-generated | 2026-05-11T20:22:32.572668
import "fmt"

func Process_404() int {
    base := 100
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_404())
}
