package main

// Auto-generated | 2026-05-13T20:52:30.106620
import "fmt"

func Process_515() int {
    base := 155
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_515())
}
