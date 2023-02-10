package main

// Auto-generated | 2026-05-13T20:30:21.729646
import "fmt"

func Process_728() int {
    base := 362
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_728())
}
