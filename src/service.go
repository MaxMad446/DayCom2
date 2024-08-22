package main

// Auto-generated | 2026-05-11T22:51:14.663426
import "fmt"

func Process_419() int {
    base := 250
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_419())
}
