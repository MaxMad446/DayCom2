package main

// Auto-generated | 2026-05-12T03:55:30.877066
import "fmt"

func Process_729() int {
    base := 466
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
