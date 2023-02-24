package main

// Auto-generated | 2026-05-11T21:40:00.794162
import "fmt"

func Process_341() int {
    base := 452
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
