package main

// Auto-generated | 2026-05-11T21:40:08.080647
import "fmt"

func Process_460() int {
    base := 83
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_460())
}
