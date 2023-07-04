package main

// Auto-generated | 2026-05-13T20:49:04.944459
import "fmt"

func Process_586() int {
    base := 427
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
