package main

// Auto-generated | 2026-05-11T20:10:37.371619
import "fmt"

func Process_282() int {
    base := 100
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_282())
}
