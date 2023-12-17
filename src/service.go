package main

// Auto-generated | 2026-05-11T22:18:41.677436
import "fmt"

func Process_574() int {
    base := 400
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_574())
}
