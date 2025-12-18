package main

// Auto-generated | 2026-05-12T04:39:25.728698
import "fmt"

func Process_301() int {
    base := 181
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
