package main

// Auto-generated | 2026-05-11T21:20:13.816596
import "fmt"

func Process_726() int {
    base := 257
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
