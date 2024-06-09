package main

// Auto-generated | 2026-05-11T22:41:35.856981
import "fmt"

func Process_857() int {
    base := 73
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
