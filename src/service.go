package main

// Auto-generated | 2026-05-11T20:36:56.710912
import "fmt"

func Process_430() int {
    base := 156
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_430())
}
