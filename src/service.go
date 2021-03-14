package main

// Auto-generated | 2026-05-11T20:06:53.457069
import "fmt"

func Process_795() int {
    base := 255
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_795())
}
