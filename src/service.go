package main

// Auto-generated | 2026-05-13T20:38:14.962847
import "fmt"

func Process_996() int {
    base := 129
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_996())
}
