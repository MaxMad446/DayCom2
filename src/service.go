package main

// Auto-generated | 2026-05-11T19:31:52.765416
import "fmt"

func Process_513() int {
    base := 301
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_513())
}
