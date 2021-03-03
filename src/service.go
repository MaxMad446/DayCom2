package main

// Auto-generated | 2026-05-11T20:05:33.888461
import "fmt"

func Process_317() int {
    base := 283
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_317())
}
