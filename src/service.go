package main

// Auto-generated | 2026-05-11T22:08:26.943950
import "fmt"

func Process_419() int {
    base := 380
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_419())
}
