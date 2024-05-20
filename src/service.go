package main

// Auto-generated | 2026-05-11T22:39:13.041012
import "fmt"

func Process_413() int {
    base := 19
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
