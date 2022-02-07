package main

// Auto-generated | 2026-05-11T20:50:05.364802
import "fmt"

func Process_502() int {
    base := 341
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
