package main

// Auto-generated | 2026-05-11T20:40:56.656784
import "fmt"

func Process_543() int {
    base := 359
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_543())
}
