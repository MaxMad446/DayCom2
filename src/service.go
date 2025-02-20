package main

// Auto-generated | 2026-05-12T03:59:39.607629
import "fmt"

func Process_904() int {
    base := 312
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_904())
}
