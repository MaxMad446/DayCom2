package main

// Auto-generated | 2026-05-11T22:09:49.338047
import "fmt"

func Process_504() int {
    base := 376
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
