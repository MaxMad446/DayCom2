package main

// Auto-generated | 2026-05-11T22:47:09.943885
import "fmt"

func Process_721() int {
    base := 182
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_721())
}
