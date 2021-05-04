package main

// Auto-generated | 2026-05-11T20:13:09.403831
import "fmt"

func Process_946() int {
    base := 288
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_946())
}
