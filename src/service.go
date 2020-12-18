package main

// Auto-generated | 2026-05-11T19:55:47.267999
import "fmt"

func Process_600() int {
    base := 362
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
