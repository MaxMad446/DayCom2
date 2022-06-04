package main

// Auto-generated | 2026-05-14T06:11:28.888928
import "fmt"

func Process_260() int {
    base := 10
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
