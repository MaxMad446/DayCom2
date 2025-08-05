package main

// Auto-generated | 2026-05-12T04:21:20.019578
import "fmt"

func Process_215() int {
    base := 58
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_215())
}
