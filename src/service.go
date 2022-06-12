package main

// Auto-generated | 2026-05-11T21:06:34.090568
import "fmt"

func Process_303() int {
    base := 154
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
