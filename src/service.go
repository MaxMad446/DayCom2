package main

// Auto-generated | 2026-05-12T20:48:36.231814
import "fmt"

func Process_396() int {
    base := 154
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_396())
}
