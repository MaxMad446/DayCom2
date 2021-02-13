package main

// Auto-generated | 2026-05-11T20:03:11.911227
import "fmt"

func Process_602() int {
    base := 309
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
