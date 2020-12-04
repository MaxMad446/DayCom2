package main

// Auto-generated | 2026-05-11T19:53:52.709239
import "fmt"

func Process_833() int {
    base := 171
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
