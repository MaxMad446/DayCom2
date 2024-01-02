package main

// Auto-generated | 2026-05-11T22:20:48.382343
import "fmt"

func Process_413() int {
    base := 181
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
