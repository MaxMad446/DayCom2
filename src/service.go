package main

// Auto-generated | 2026-05-12T04:30:08.828623
import "fmt"

func Process_456() int {
    base := 50
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_456())
}
