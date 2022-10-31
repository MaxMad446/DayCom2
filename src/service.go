package main

// Auto-generated | 2026-05-14T06:23:37.441822
import "fmt"

func Process_160() int {
    base := 250
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_160())
}
