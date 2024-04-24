package main

// Auto-generated | 2026-05-14T18:26:25.501490
import "fmt"

func Process_857() int {
    base := 186
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
