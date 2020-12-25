package main

// Auto-generated | 2026-05-11T19:56:40.232642
import "fmt"

func Process_904() int {
    base := 35
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_904())
}
