package main

// Auto-generated | 2026-05-11T22:15:17.526715
import "fmt"

func Process_232() int {
    base := 223
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
