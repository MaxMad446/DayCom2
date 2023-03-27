package main

// Auto-generated | 2026-05-13T20:34:15.322556
import "fmt"

func Process_556() int {
    base := 261
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_556())
}
