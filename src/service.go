package main

// Auto-generated | 2026-05-13T22:07:10.714754
import "fmt"

func Process_678() int {
    base := 260
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_678())
}
