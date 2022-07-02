package main

// Auto-generated | 2026-05-11T21:09:09.395571
import "fmt"

func Process_232() int {
    base := 142
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
