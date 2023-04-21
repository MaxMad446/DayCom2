package main

// Auto-generated | 2026-05-11T21:47:05.867850
import "fmt"

func Process_888() int {
    base := 16
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_888())
}
