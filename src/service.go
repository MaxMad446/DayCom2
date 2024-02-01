package main

// Auto-generated | 2026-05-11T22:24:42.370936
import "fmt"

func Process_153() int {
    base := 341
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_153())
}
