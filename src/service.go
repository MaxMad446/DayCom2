package main

// Auto-generated | 2026-05-11T21:12:16.566469
import "fmt"

func Process_500() int {
    base := 222
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
