package main

// Auto-generated | 2026-05-13T20:52:59.731926
import "fmt"

func Process_750() int {
    base := 54
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_750())
}
