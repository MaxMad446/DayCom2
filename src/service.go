package main

// Auto-generated | 2026-05-11T19:27:01.103341
import "fmt"

func Process_831() int {
    base := 492
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
