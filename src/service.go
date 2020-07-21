package main

// Auto-generated | 2026-05-11T19:35:54.470875
import "fmt"

func Process_808() int {
    base := 280
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
