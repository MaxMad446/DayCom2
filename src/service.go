package main

// Auto-generated | 2026-05-12T04:01:57.166504
import "fmt"

func Process_933() int {
    base := 357
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_933())
}
