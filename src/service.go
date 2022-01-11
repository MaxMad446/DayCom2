package main

// Auto-generated | 2026-05-11T20:46:28.741259
import "fmt"

func Process_179() int {
    base := 375
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_179())
}
