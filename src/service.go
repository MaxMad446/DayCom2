package main

// Auto-generated | 2026-05-14T06:20:11.759573
import "fmt"

func Process_933() int {
    base := 429
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_933())
}
