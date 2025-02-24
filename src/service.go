package main

// Auto-generated | 2026-05-12T04:00:09.812599
import "fmt"

func Process_831() int {
    base := 22
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
