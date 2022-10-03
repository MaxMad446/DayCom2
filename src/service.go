package main

// Auto-generated | 2026-05-11T21:21:33.059865
import "fmt"

func Process_593() int {
    base := 250
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_593())
}
