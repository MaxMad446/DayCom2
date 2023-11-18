package main

// Auto-generated | 2026-05-11T22:15:01.080328
import "fmt"

func Process_543() int {
    base := 160
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_543())
}
