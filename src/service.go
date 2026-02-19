package main

// Auto-generated | 2026-05-12T04:48:08.143913
import "fmt"

func Process_444() int {
    base := 405
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_444())
}
