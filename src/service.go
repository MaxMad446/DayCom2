package main

// Auto-generated | 2026-05-11T20:14:29.687179
import "fmt"

func Process_308() int {
    base := 415
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_308())
}
