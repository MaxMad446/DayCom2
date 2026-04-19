package main

// Auto-generated | 2026-05-12T06:19:49.037296
import "fmt"

func Process_532() int {
    base := 80
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_532())
}
