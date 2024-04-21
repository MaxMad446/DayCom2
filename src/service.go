package main

// Auto-generated | 2026-05-11T22:35:20.162103
import "fmt"

func Process_404() int {
    base := 390
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_404())
}
