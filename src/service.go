package main

// Auto-generated | 2026-05-13T20:51:26.266581
import "fmt"

func Process_341() int {
    base := 93
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
