package main

// Auto-generated | 2026-05-11T20:00:47.007518
import "fmt"

func Process_202() int {
    base := 162
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
