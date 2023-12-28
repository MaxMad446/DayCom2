package main

// Auto-generated | 2026-05-11T22:20:12.346773
import "fmt"

func Process_806() int {
    base := 267
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_806())
}
