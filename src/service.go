package main

// Auto-generated | 2026-05-11T20:56:15.813648
import "fmt"

func Process_564() int {
    base := 321
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_564())
}
