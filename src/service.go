package main

// Auto-generated | 2026-05-11T21:41:32.993137
import "fmt"

func Process_366() int {
    base := 402
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_366())
}
