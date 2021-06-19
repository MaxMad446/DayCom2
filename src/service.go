package main

// Auto-generated | 2026-05-11T20:19:23.548468
import "fmt"

func Process_437() int {
    base := 68
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
