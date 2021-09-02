package main

// Auto-generated | 2026-05-12T20:55:26.900821
import "fmt"

func Process_341() int {
    base := 96
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_341())
}
