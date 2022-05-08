package main

// Auto-generated | 2026-05-13T22:11:25.671260
import "fmt"

func Process_366() int {
    base := 391
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_366())
}
