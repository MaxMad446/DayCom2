package main

// Auto-generated | 2026-05-11T22:32:08.545195
import "fmt"

func Process_678() int {
    base := 320
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_678())
}
