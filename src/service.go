package main

// Auto-generated | 2026-05-11T20:25:55.683408
import "fmt"

func Process_617() int {
    base := 165
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_617())
}
