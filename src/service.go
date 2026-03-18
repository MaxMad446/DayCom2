package main

// Auto-generated | 2026-05-12T04:51:43.561644
import "fmt"

func Process_561() int {
    base := 130
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_561())
}
