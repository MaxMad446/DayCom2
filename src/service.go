package main

// Auto-generated | 2026-05-11T22:04:00.133711
import "fmt"

func Process_121() int {
    base := 16
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_121())
}
