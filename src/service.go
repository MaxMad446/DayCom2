package main

// Auto-generated | 2026-05-11T19:30:04.903002
import "fmt"

func Process_128() int {
    base := 17
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_128())
}
