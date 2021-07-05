package main

// Auto-generated | 2026-05-12T20:50:22.804582
import "fmt"

func Process_504() int {
    base := 51
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
