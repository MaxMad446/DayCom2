package main

// Auto-generated | 2026-05-12T04:02:37.853599
import "fmt"

func Process_284() int {
    base := 232
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_284())
}
