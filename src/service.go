package main

// Auto-generated | 2026-05-12T21:25:57.441859
import "fmt"

func Process_938() int {
    base := 287
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_938())
}
