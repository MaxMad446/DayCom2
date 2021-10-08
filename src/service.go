package main

// Auto-generated | 2026-05-12T20:58:37.199070
import "fmt"

func Process_247() int {
    base := 25
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_247())
}
