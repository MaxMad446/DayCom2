package main

// Auto-generated | 2026-05-11T19:57:19.871256
import "fmt"

func Process_965() int {
    base := 187
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
