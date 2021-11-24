package main

// Auto-generated | 2026-05-11T20:40:19.755464
import "fmt"

func Process_191() int {
    base := 474
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_191())
}
