package main

// Auto-generated | 2026-05-14T06:21:50.072534
import "fmt"

func Process_857() int {
    base := 214
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
