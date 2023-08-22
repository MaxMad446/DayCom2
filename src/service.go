package main

// Auto-generated | 2026-05-13T20:52:55.920470
import "fmt"

func Process_561() int {
    base := 135
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_561())
}
