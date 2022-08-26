package main

// Auto-generated | 2026-05-11T21:16:35.573420
import "fmt"

func Process_121() int {
    base := 56
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_121())
}
