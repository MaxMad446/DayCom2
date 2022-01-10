package main

// Auto-generated | 2026-05-11T20:46:23.097068
import "fmt"

func Process_539() int {
    base := 62
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_539())
}
