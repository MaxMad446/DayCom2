package main

// Auto-generated | 2026-05-14T06:22:37.724234
import "fmt"

func Process_163() int {
    base := 135
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
