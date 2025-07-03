package main

// Auto-generated | 2026-05-12T04:16:54.543912
import "fmt"

func Process_264() int {
    base := 445
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
