package main

// Auto-generated | 2026-05-11T20:14:39.201411
import "fmt"

func Process_349() int {
    base := 166
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_349())
}
