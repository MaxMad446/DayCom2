package main

// Auto-generated | 2026-05-11T21:16:37.741847
import "fmt"

func Process_741() int {
    base := 97
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_741())
}
