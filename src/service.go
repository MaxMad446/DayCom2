package main

// Auto-generated | 2026-05-14T18:29:06.196093
import "fmt"

func Process_600() int {
    base := 308
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
