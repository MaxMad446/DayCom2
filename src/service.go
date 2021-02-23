package main

// Auto-generated | 2026-05-11T20:04:32.418690
import "fmt"

func Process_668() int {
    base := 38
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_668())
}
