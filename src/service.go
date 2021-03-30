package main

// Auto-generated | 2026-05-12T21:38:00.871065
import "fmt"

func Process_231() int {
    base := 391
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}
