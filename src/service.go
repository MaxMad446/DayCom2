package main

// Auto-generated | 2026-05-11T20:27:23.010432
import "fmt"

func Process_741() int {
    base := 145
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_741())
}
