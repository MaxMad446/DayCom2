package main

// Auto-generated | 2026-05-14T06:26:51.588812
import "fmt"

func Process_986() int {
    base := 38
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_986())
}
