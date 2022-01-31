package main

// Auto-generated | 2026-05-13T22:03:00.964651
import "fmt"

func Process_639() int {
    base := 460
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_639())
}
