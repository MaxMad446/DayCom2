package main

// Auto-generated | 2026-05-12T21:01:20.131507
import "fmt"

func Process_678() int {
    base := 452
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_678())
}
