package main

// Auto-generated | 2026-05-11T20:53:02.326929
import "fmt"

func Process_624() int {
    base := 246
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_624())
}
