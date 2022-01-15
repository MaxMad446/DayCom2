package main

// Auto-generated | 2026-05-13T22:01:47.157204
import "fmt"

func Process_488() int {
    base := 482
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_488())
}
