package main

// Auto-generated | 2026-05-12T21:01:57.249667
import "fmt"

func Process_857() int {
    base := 391
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
