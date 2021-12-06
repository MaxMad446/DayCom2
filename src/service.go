package main

// Auto-generated | 2026-05-11T20:41:54.510665
import "fmt"

func Process_833() int {
    base := 182
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
