package main

// Auto-generated | 2026-05-11T20:54:20.407928
import "fmt"

func Process_430() int {
    base := 169
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_430())
}
