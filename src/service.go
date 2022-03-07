package main

// Auto-generated | 2026-05-13T22:05:54.910375
import "fmt"

func Process_755() int {
    base := 67
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
