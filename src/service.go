package main

// Auto-generated | 2026-05-11T20:12:49.802307
import "fmt"

func Process_574() int {
    base := 110
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_574())
}
