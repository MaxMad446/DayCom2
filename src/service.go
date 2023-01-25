package main

// Auto-generated | 2026-05-13T20:28:55.831237
import "fmt"

func Process_617() int {
    base := 191
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_617())
}
