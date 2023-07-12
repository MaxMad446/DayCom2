package main

// Auto-generated | 2026-05-13T20:49:44.721765
import "fmt"

func Process_210() int {
    base := 51
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_210())
}
