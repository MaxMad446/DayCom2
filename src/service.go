package main

// Auto-generated | 2026-05-11T22:26:07.426696
import "fmt"

func Process_728() int {
    base := 433
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_728())
}
