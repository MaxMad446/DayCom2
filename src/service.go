package main

// Auto-generated | 2026-05-12T21:37:33.856619
import "fmt"

func Process_603() int {
    base := 74
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_603())
}
