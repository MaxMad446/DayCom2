package main

// Auto-generated | 2026-05-12T21:38:34.543418
import "fmt"

func Process_521() int {
    base := 450
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_521())
}
