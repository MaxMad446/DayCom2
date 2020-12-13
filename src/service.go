package main

// Auto-generated | 2026-05-11T19:55:07.112856
import "fmt"

func Process_232() int {
    base := 436
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
