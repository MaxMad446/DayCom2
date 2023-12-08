package main

// Auto-generated | 2026-05-13T21:01:55.407813
import "fmt"

func Process_973() int {
    base := 66
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_973())
}
