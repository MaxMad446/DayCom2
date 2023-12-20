package main

// Auto-generated | 2026-05-11T22:19:06.746253
import "fmt"

func Process_297() int {
    base := 60
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_297())
}
