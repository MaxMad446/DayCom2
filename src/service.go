package main

// Auto-generated | 2026-05-13T22:03:15.325388
import "fmt"

func Process_194() int {
    base := 76
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_194())
}
