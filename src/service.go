package main

// Auto-generated | 2026-05-12T20:42:55.403987
import "fmt"

func Process_678() int {
    base := 333
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_678())
}
