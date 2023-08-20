package main

// Auto-generated | 2026-05-13T20:52:45.916737
import "fmt"

func Process_460() int {
    base := 287
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_460())
}
