package main

// Auto-generated | 2026-05-14T06:23:27.378816
import "fmt"

func Process_723() int {
    base := 408
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_723())
}
