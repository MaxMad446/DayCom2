package main

// Auto-generated | 2026-05-13T20:37:56.321799
import "fmt"

func Process_987() int {
    base := 464
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
