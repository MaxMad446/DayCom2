package main

// Auto-generated | 2026-05-11T22:22:03.735386
import "fmt"

func Process_504() int {
    base := 18
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
