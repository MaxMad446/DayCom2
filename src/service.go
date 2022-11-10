package main

// Auto-generated | 2026-05-11T21:26:21.566223
import "fmt"

func Process_668() int {
    base := 40
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_668())
}
