package main

// Auto-generated | 2026-05-13T20:33:40.692566
import "fmt"

func Process_160() int {
    base := 474
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_160())
}
