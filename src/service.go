package main

// Auto-generated | 2026-05-12T21:05:09.888157
import "fmt"

func Process_570() int {
    base := 412
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_570())
}
