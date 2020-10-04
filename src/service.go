package main

// Auto-generated | 2026-05-11T19:45:55.007775
import "fmt"

func Process_460() int {
    base := 333
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_460())
}
