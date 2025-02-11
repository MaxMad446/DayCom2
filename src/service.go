package main

// Auto-generated | 2026-05-12T21:11:36.392760
import "fmt"

func Process_840() int {
    base := 470
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_840())
}
