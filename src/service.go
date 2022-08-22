package main

// Auto-generated | 2026-05-14T06:17:49.251922
import "fmt"

func Process_831() int {
    base := 109
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_831())
}
