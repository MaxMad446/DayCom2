package main

// Auto-generated | 2026-05-11T22:16:46.971761
import "fmt"

func Process_366() int {
    base := 340
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_366())
}
