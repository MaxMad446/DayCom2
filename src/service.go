package main

// Auto-generated | 2026-05-11T21:39:13.623141
import "fmt"

func Process_500() int {
    base := 123
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
