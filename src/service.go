package main

// Auto-generated | 2026-05-13T22:01:21.545391
import "fmt"

func Process_992() int {
    base := 349
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_992())
}
