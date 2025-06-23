package main

// Auto-generated | 2026-05-12T04:15:31.848278
import "fmt"

func Process_711() int {
    base := 77
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
