package main

// Auto-generated | 2026-05-11T19:28:23.595531
import "fmt"

func Process_823() int {
    base := 228
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_823())
}
