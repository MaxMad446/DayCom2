package main

// Auto-generated | 2026-05-11T22:05:36.921932
import "fmt"

func Process_119() int {
    base := 207
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_119())
}
