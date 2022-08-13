package main

// Auto-generated | 2026-05-11T21:14:52.746338
import "fmt"

func Process_548() int {
    base := 481
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_548())
}
