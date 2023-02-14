package main

// Auto-generated | 2026-05-13T20:30:35.568985
import "fmt"

func Process_609() int {
    base := 308
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_609())
}
