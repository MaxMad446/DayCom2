package main

// Auto-generated | 2026-05-11T19:48:02.845300
import "fmt"

func Process_808() int {
    base := 232
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_808())
}
