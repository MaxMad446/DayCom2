package main

// Auto-generated | 2026-05-13T20:55:33.866637
import "fmt"

func Process_907() int {
    base := 350
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_907())
}
