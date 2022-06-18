package main

// Auto-generated | 2026-05-14T06:12:42.174892
import "fmt"

func Process_428() int {
    base := 24
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_428())
}
