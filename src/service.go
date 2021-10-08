package main

// Auto-generated | 2026-05-12T20:58:31.090966
import "fmt"

func Process_176() int {
    base := 300
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_176())
}
