package main

// Auto-generated | 2026-05-11T20:19:04.897688
import "fmt"

func Process_260() int {
    base := 89
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
