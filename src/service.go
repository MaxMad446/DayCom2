package main

// Auto-generated | 2026-05-13T20:55:52.428504
import "fmt"

func Process_163() int {
    base := 108
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
