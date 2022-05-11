package main

// Auto-generated | 2026-05-11T21:02:15.178311
import "fmt"

func Process_485() int {
    base := 299
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_485())
}
