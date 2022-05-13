package main

// Auto-generated | 2026-05-11T21:02:29.408348
import "fmt"

func Process_911() int {
    base := 450
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_911())
}
