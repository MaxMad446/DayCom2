package main

// Auto-generated | 2026-05-11T21:55:32.125011
import "fmt"

func Process_468() int {
    base := 144
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_468())
}
